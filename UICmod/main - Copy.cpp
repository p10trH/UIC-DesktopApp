#include <iostream>
#include <fstream>
#include <string>
#include "htmlParser.h"

using namespace std;
int extractPrice(string){

}
string extractName(string input)
{
    return input.substr(3,input.size()-6);
}
int charInString(string input, char look){
    int i;
    int counter=0;
    for(i=0; i < input.length(); i++){
        if(input.at(i) == look){
            counter++;
        }
    }
    return counter;
}
int extractOTime(string input)
{
    int output= 0;
    int middle;
    if(input.find(":") != std::string::npos)
    {
        middle = input.find(":");
        output += (input.at(middle + 2)-48);
        output += (input.at(middle + 1)-48)*10;
        output += (input.at(middle - 1)-48)*100;
        if(input.at(middle - 2) == '1'){
            output += 1000;
        }
        if(input.at(middle+4) == 'p'){
            output += 1200;
        }
        if(output >= 1200 && input.at(middle+4) == 'a')
        {
            output -=1200;
        }
        return output;
    } else {
        return 9999;
    }
}
int extractCTime(string input)
{
    int output= 0;
    int middle;
    if(input.rfind(":") != std::string::npos)
    {
        middle = input.rfind(":");
        output += (input.at(middle + 2)-48);
        output += (input.at(middle + 1)-48)*10;
        output += (input.at(middle - 1)-48)*100;
        if(input.at(middle - 2) == '1'){
            output += 1000;
        }
        if(input.at(middle+4) == 'p'){
            output += 1200;
        }
        if(output >= 1200 && input.at(middle+4) == 'a')
        {
            output -=1200;
        }
        return output;
    } else {
        return 9999;
    }
}

string getBetween(string inString, string frontString, string backString)
{
    int startPosition = inString.find(frontString) + frontString.length();
    int endPosition = inString.find(backString);
    return inString.substr(startPosition, endPosition - startPosition);
}
string cleanFilter(string inString)
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

void htmlParserAM(char* filename) //http://www.allmenus.com/
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
void locationLoader(char* filename)
{
    string line;
    string name;
    string adress1;
    string adress2;
    string phone;
    string hoursMon;
    string hoursTue;
    string hoursWed;
    string hoursThr;
    string hoursFri;
    string hoursSat;
    string hoursSun;
    string menuFile;
    string hashTags;
    ifstream file;
    file.open(filename);
    while(getline(file,name))
    {
        getline(file,adress1);
        getline(file,adress2);
        getline(file,phone);
        getline(file,hoursMon);
        getline(file,hoursTue);
        getline(file,hoursWed);
        getline(file,hoursThr);
        getline(file,hoursFri);
        getline(file,hoursSat);
        getline(file,hoursSun);
        getline(file,menuFile);
        getline(file,hashTags);
        getline(file, line);
        name = extractName(name);
        int i;
        int openTime = extractOTime(hoursSat);
        int closeTime = extractCTime(hoursSat);
        int nowTime = 830 + 1200;
        for(i=0; i<2400; i+=100)
        {
            if(i == openTime){
                cout << "[";
            } else if(i == closeTime){
                cout << "]";
            } else if(i == nowTime){
                cout << "|";
            } else {
                cout << "-";
            }
            i+=30;
            if(i == openTime){
                cout << "[";
            } else if(i == closeTime){
                cout << "]";
            } else if(i == nowTime){
                cout << "|";
            } else {
                cout << "-";
            }
            i-=30;
        }
        cout << name;
        cout << endl;
    }
}
void menuLoader(char* filename)
{
    int startPrice =0;
    int endPrice =0;
    string line;
    ifstream file;
    file.open(filename);
    while(getline(file,line))
    {
        if(line.at(0) != '#'){
            if(charInString(line, '$') == 1)
            {
                startPrice = line.find('$')+1;
                endPrice = line.find('.') + 2;
                cout << line.substr(startPrice, startPrice+1) << endl;
            }
            //cout << line << endl;
        } else {
            //cout << extractName(line) << endl;
        }
    }
}

int main()
{
    //menuLoader("Locations/Menus/grk-giordanos.txt");
    //locationLoader("Locations/GreekTown.txt");
    //htmlParserAM("HTML/Metro Klub menu.htm");
    return 0;
}
