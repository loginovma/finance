#include <stdio.h>
#include <iostream>

#include "File.h"
#include "ModelPointer.h"
#include "../model/Bank.h"

using namespace std;

void File::loadBanks(ModelList& banks)
{
    FILE* f = fopen("data/banks.csv", "r");
    if (f == 0) {
            cout << "banks.csv not found" << endl;
        } else {
            cout << "file loaded" << endl;
        }
        
    char name[21];
    ModelPointer temp;
        
    while ( fscanf(f, "%20s", name) != EOF ) {
        temp = new Bank(name);
        banks.add(temp);
    }
        
    fclose(f);
}