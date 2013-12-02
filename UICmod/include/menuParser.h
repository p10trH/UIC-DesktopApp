#ifndef MENUPARSER_H
#define MENUPARSER_H
#include <iostream>
#include <string>
#include <fstream>

using namespace::std;

class menuParser
{
    public:
        menuParser();
        virtual ~menuParser();
        void allmenusParse(char* filename);
        string getBetween(string inString, string frontString, string backString);
        string cleanFilter(string inString);
    protected:
    private:
};

#endif // MENUPARSER_H
