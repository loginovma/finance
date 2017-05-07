#ifndef MENUITEM_H_
#define MENUITEM_H_

class MenuItem
{
private:
    char* line;
    bool callable;
    
    MenuItem(const MenuItem& item);
    
public:
    Controller* execute();
    
    MenuItem(const char* line, bool callable);
    ~MenuItem();
}

#endif