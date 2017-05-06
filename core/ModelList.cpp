/* bool deleteLast()
    {
        ModelNode* current = this;
        
        while(current->next != 0) {
            current = current->next;
        }
        
        ModelNode* prev = current->prev;
        
        if (prev == 0) {
            return false;
        }
        
        delete current;
        prev->next = 0;
        
        return true;
        
    }
*/