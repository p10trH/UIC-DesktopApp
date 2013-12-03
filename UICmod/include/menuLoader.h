#ifndef MENULOADER_H
#define MENULOADER_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class menuLoader
{
    public:
        menuLoader();
        virtual ~menuLoader();
        int extractPrice(string);
        int charInString(string input, char look);
        void menuLoad(char* filename, int option);
    protected:
    private:
};

#endif // MENULOADER_H
