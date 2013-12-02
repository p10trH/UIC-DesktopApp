#include "../include/menuParser.h"

menuParser::menuParser()
{
    //ctor
}

menuParser::~menuParser()
{
    //dtor
}

string menuParser::getBetween(string inString, string frontString, string backString)
{
    int startPosition = inString.find(frontString) + frontString.length();
    int endPosition = inString.find(backString);
    return inString.substr(startPosition, endPosition - startPosition);
}

string menuParser::cleanFilter(string inString)
{
    string frontEnd;
    string backEnd;
    if(inString.find("&amp;") != std::string::npos){
        frontEnd = inString.substr(0,inString.find("&amp;"));
        backEnd = inString.substr(inString.find("&amp;")+5);
        return cleanFilter(frontEnd + "&" + backEnd);
    } else {
        return inString;
    }
}

void menuParser::allmenusParse(char* filename) //http://www.allmenus.com/
{
    string nameHold;
    string priceHold;
    string line;
    string fStr;
    string bStr;
    string printString;
    ifstream file;
    file.open(filename);
    while(getline(file, line))
    {
        fStr = "<h3>";
        bStr = "</h3>";
        if(line.find(fStr) != std::string::npos)
        {
            printString = getBetween(line,fStr,bStr);
            printString = cleanFilter(printString);
            cout << "###" << printString << "###" << endl;
        }
        fStr = "<span class=\"name\">";
        bStr = "</span>";
        if(line.find(fStr) != std::string::npos)
        {
            printString = getBetween(line,fStr,bStr);
            printString = cleanFilter(printString);
            cout << printString << " : ";
        }
        //getline(file,line);
        fStr = "<span class=\"price\">";
        bStr = "</span>";
        if(line.find(fStr) != std::string::npos)
        {
            printString = getBetween(line,fStr,bStr);
            printString = cleanFilter(printString);
            cout << printString << endl;
        }
    }
    file.close();
}
