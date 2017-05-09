#include <stdio.h>
#include <iostream>
#include <string>

#include "File.h"
#include "ModelPointer.h"
#include "../model/Bank.h"
#include "../model/Account.h"

using namespace std;

void File::loadBanks(ModelList& banks)
{
    FILE* f = fopen("data/banks", "r");
    if (f == 0) {
            cout << "data/banks file not found" << endl;
        } else {
            cout << "data/banks file loaded" << endl;
        }
        
    char name[21];
    ModelPointer temp;
        
    while ( fscanf(f, "%20s", name) != EOF ) {
        temp = new Bank(name);
        banks.add(temp);
    }
        
    fclose(f);
}

void File::loadAccs(ModelList& accounts, ModelList& banks)
{
    FILE* f;
    ModelNode* current = banks.getHead();
    string path;
    
    
    while(1) {
        path = "data/" + (string) current->getNode().ptr()->getName();
    
        cout << path;
        f = fopen(&path.at(0) , "r");
        
        if (f == 0) {
            cout << " file not found" << endl;
            if (current->next == 0) {
            break;
        }
    
        current = current->next;
        continue;
            
        } else {
            cout << " file loaded" << endl;
        }
        
        char name[21];
        ModelPointer temp;
    
        ModelPointer bank = current->getNode().ptr();
        
        while ( fscanf(f, "%20s", name) != EOF ) {
        temp = new Account(name, bank);
        accounts.add(temp);
        }
    
        if (current->next == 0) {
            break;
        }
    
        current = current->next;
     
        fclose(f);
    }
   
}

void File::storeBanks(ModelList& list)
{
    FILE* f = fopen("data/banks", "w");
    if (f == 0) {
            cout << "data/banks file not found" << endl;
            return;
        } else {
            cout << "data/banks file loaded" << endl;
        }
        
    ModelNode* current = list.getHead();
    while(1) {
        fprintf(f, "%s\n", current->getNode().ptr()->getName());
        
        if (current->next == 0) {
            break;
        }
    
        current = current->next;
    }
    
    fclose(f);
}

void File::storeAccs(ModelList& accounts, ModelList& banks)
{
    
}