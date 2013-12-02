#ifndef LOCATIONLOADER_H
#define LOCATIONLOADER_H
#include <iostream>
#include <string>
#include <fstream>
#include "../include/menuLoader.h"

using namespace::std;

class locationLoader
{
    public:
        locationLoader();
        virtual ~locationLoader();
        void locationLoad(char* filename, int option);
        int extractOTime(string input);
        int extractCTime(string input);
        string extractName(string input);
    protected:
    private:
};

#endif // LOCATIONLOADER_H
