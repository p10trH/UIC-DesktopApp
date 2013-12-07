#include "../include/locationLoader.h"

locationLoader::locationLoader()
{
    //ctor
}

locationLoader::~locationLoader()
{
    //dtor
}
string locationLoader::extractName(string input) //function used to pull out the name of the location
{
    return input.substr(3,input.size()-6);
}
int locationLoader::extractOTime(string input) //gets the opening time out of a "Time" string
{                                               //returns time in a 0000 - 2400 format
    int output= 0; //this is the int we are going to return
    int middle; //geint to store the loaction of the colon between hr:min
    if(input.find(":") != std::string::npos) //make sure there is a colon in the string
    {
        middle = input.find(":"); //find the first colon
        output += (input.at(middle + 2)-48); //get this value 00:0x
        output += (input.at(middle + 1)-48)*10; //get this value 00:x0
        output += (input.at(middle - 1)-48)*100; // get this value 0x:00
        if(input.at(middle - 2) == '1'){ // check if the hour is double digit
            output += 1000; //if so add ten hours
        }
        if(input.at(middle+4) == 'p'){ //check if it's pm
            if(input.at(middle - 2) == '1' && input.at(middle - 1) == '2'){ //special case for 12pm
                //its 12pm, don't add anything. This was taken care of above ^^
            } else {
                output += 1200; //if it's not 12pm, or past 12pm, add 12 hours to bring from AM into PM time
            }
        }
        if(output >= 1200 && input.at(middle+4) == 'a') // specal case for 12 am
        {
            output -=1200; //if it's 12 am, return time to the 0th hour of the day
        }
        return output;
    } else {
        return 9999; //if there is anything else, return this "broken" time number
    }
}
int locationLoader::extractCTime(string input) //extracts Closing time, very similar to OTime, function
{
    int output= 0;
    int middle;
    if(input.rfind(":") != std::string::npos) //only difference is use of rfind instead of find
    {
        middle = input.rfind(":");                  //we need to find the last "time" in the string
        output += (input.at(middle + 2)-48);        //^^open time is the first time in string
        output += (input.at(middle + 1)-48)*10;     //^^close time is last time in string
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
string locationLoader::locationLoad(char* filename, int option) //the big locationLoad funciton
{
    string infoOut = ""; //going to return this string
    /*
    cout << "< 1. Get all retaurant info" << endl;
    cout << "< 2. Tell me what's open now" << endl;
    cout << "< 3. Show me a menu" << endl;
    */
    string line;    //blank line, no spicifc use at the moment
    string name;    //string to load name
    string adress1;     //address string
    string adress2;     //address string part 2
    string phone;       //phone number string
    string hoursMon;    //strings to load hours
    string hoursTue;
    string hoursWed;
    string hoursThr;
    string hoursFri;
    string hoursSat;
    string hoursSun;
    string menuFile;    //string to load the menu file
    string hashTags;    //string to load restaurnt hash tags
    ifstream file;      //file

    string menuSelectName;  //used for the option 3
    if(option == 3){
        cout << "What menu would you like to see?" << endl;
        cin >> menuSelectName;
        //menuSelectName = "Primos Chicago Pizza";
    }
    file.open(filename);        //opens the file
    while(getline(file,name))   //grabs all the info we need from the text file
    {
        getline(file,adress1);      //here are all the get lines
        getline(file,adress2);      //they get all the info we need respectivly
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

        if(option == 1){        //option 1 wants us to get restaurant info
            infoOut += name + "\n";     //adds all the info to our out string
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
            infoOut += "\n";        //new line to space from the next restaurant
        } else if (option == 2) {       //option 2 lists evrything open at a certian time at a certain day
            string hoursOnDay = hoursSun;       //this string sets the current day
            int currentTime = 1350;             //this int sets the current time

            int openTime = extractOTime(hoursOnDay);    //turns open time part of string into int
            int closeTime = extractCTime(hoursOnDay);   //turns close time part of string into int
            if(openTime < currentTime && currentTime < closeTime){  //if openTime < currentTime < closeTime
                infoOut += name + "\n";                                 //Then the restaurant is open
            } else if (closeTime < openTime && openTime < currentTime) {    //if the restaurant's closing hours roll over into the next day
                infoOut += name + "\n";                                     //special check to see if it's open
            } else if (hoursOnDay.find("Open 24 hours") != std::string::npos) { //if it says "open 24 hours"
                infoOut += name + "\n";                                             //then it's always open
            }
        } else if (option == 3) {   //option 3 is to print out a menu
            if(name.find(menuSelectName) != std::string::npos)  //search for restaurant we want the menu of
            {
                menuFile = "Locations/Menus/" + menuFile.substr(1); //adds folder location with the menu name
                cout << menuFile << endl;       //prints for fun
                infoOut += menuFile + "\n";

                menuLoader mL;  //invokes the menu loader class
                char* mF = new char[menuFile.size() + 1];   //conversion from string to char*
                std::copy(menuFile.begin(), menuFile.end(), mF);
                mF[menuFile.size()] = '\0';

                mL.menuLoad(mF, 1); //calls the menu loader fuction with the menu name and option1(print everything)
                delete[] mF;    //deletes stuff to avoid memory leaks
                mL.~menuLoader();   //more deleating
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
    file.close(); //closes the file
    return infoOut; //returns the info we need
}
