#include "../include/locationLoader.h"

locationLoader::locationLoader()
{
    //ctor
}

locationLoader::~locationLoader()
{
    //dtor
}
string locationLoader::extractName(string input)
{
    return input.substr(3,input.size()-6);
}
int locationLoader::extractOTime(string input)
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
            if(input.at(middle - 2) == '1' && input.at(middle - 1) == '2'){
                //its 12pm
            } else {
                output += 1200;
            }
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
int locationLoader::extractCTime(string input)
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
string locationLoader::locationLoad(char* filename, int option)
{
    string infoOut = "";
    /*
    cout << "< 1. Get all retaurant info" << endl;
    */
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
    string menuSelectName;
    if(option == 3){
        cout << "What menu would you like to see?" << endl;
        //cin >> menuSelectName;
        menuSelectName = "Primos Chicago Pizza";
    }
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
        //name = extractName(name);

        if(option == 1){
            infoOut += name + "\n";
            infoOut += adress1 + "\n";
            infoOut += adress2 + "\n";
            infoOut += phone + "\n";
            infoOut += hoursMon + "\n";
            infoOut += hoursTue + "\n";
            infoOut += hoursWed + "\n";
            infoOut += hoursThr + "\n";
            infoOut += hoursFri + "\n";
            infoOut += hoursSat + "\n";
            infoOut += hoursSun + "\n";
            infoOut += hashTags + "\n";
            infoOut += "\n";
        } else if (option == 2) {
            string hoursOnDay = hoursSun;
            int currentTime = 1350;

            int openTime = extractOTime(hoursOnDay);
            int closeTime = extractCTime(hoursOnDay);
            if(openTime < currentTime && currentTime < closeTime){
                //cout << name << endl;
                infoOut += name + "\n";
            } else if (closeTime < openTime && openTime < currentTime) {
                //cout << name << endl;
                infoOut += name + "\n";
            } else if (hoursOnDay.find("Open 24 hours") != std::string::npos) {
                //cout << name << endl;
                infoOut += name + "\n";
            }
        } else if (option == 3) {
            if(name.find(menuSelectName) != std::string::npos)
            {
                menuFile = "Locations/Menus/" + menuFile.substr(1);
                //cout << menuFile << endl;
                infoOut += menuFile + "\n";

                menuLoader mL;
                char* mF = new char[menuFile.size() + 1];
                std::copy(menuFile.begin(), menuFile.end(), mF);
                mF[menuFile.size()] = '\0';

                mL.menuLoad(mF, 1);
                delete[] mF;
                mL.~menuLoader();
            }
        }
        //TIME LOOP
        /*
        int i;
        int openTime = extractOTime(hoursSat);
        int closeTime = extractCTime(hoursSat);
        int nowTime = 1130 + 1200;
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
        */
    }
    file.close();
    return infoOut;
}
