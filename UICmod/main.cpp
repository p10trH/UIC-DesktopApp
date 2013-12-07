#include <iostream>
#include <fstream>
#include <string>
#include "include/menuParser.h"
#include "include/locationLoader.h"

using namespace std;

void listLocations() //Lists all locations to select
{
    cout << "< 1. East Campus" << endl;
    cout << "< 2. Greek Town" << endl;
    cout << "< 3. South Halstead" << endl;
    cout << "< 4. Taylor Street" << endl;
}
void listOptions() //List all user options
{
    cout << "< 1. Get all retaurant info" << endl;
    cout << "< 2. Tell me what's open now" << endl;
    cout << "< 3. Show me a menu" << endl;

    cout << "< 0. To exit" << endl;
}

char* setLocation(int selection) //converts the number given into file name
{
    if(selection == 1) {
        cout << "===Ease-Campus===" << endl;
        return "Locations/EastCampus.txt";
    } else if(selection == 2) {
        cout << "===Greek-Town===" << endl;
        return "Locations/GreekTown.txt";
    } else if(selection == 3) {
        cout << "===South-Halstead===" << endl;
        return "Locations/SouthHalstead.txt";
    } else if(selection == 4) {
        cout << "===Taylor-Street===" << endl;
        return "Locations/TaylorStreet.txt";
    }
}

void foodService(){ //calls the food App
    int locationSelect; //int to save location se
    int optionSelect;   //int to save option
    char* location;
    locationLoader lL;  //invokes the locationLoader, so we can run fucntions on the files
    cout << "Welcome to UIC Food, select an area:" << endl;

    listLocations();    //print the location choices for the user
    cin >> locationSelect;  //get user input
    location = setLocation(locationSelect); //gets the location filename

    while(optionSelect != 0)    //if they don't exit
    {
        listOptions();          //list user options
        cin >> optionSelect;    //get user input
        cout << lL.locationLoad(location, optionSelect);    //passes the loaction filename and the option selection
    }
    //menuLoader("Locations/Menus/grk-giordanos.txt");

    //locationLoader lL;
    //lL.locationLoad("Locations/GreekTown.txt");

    //menuParser mp;
    //mp.allmenusParse("HTML/Metro Klub menu.htm");
}
int main()
{
    //courseService();
    foodService();
    return 0;
}
