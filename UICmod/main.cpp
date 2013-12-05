#include <iostream>
#include <fstream>
#include <string>
#include "include/menuParser.h"
#include "include/locationLoader.h"

using namespace std;

void listLocations()
{
    cout << "< 1. East Campus" << endl;
    cout << "< 2. Greek Town" << endl;
    cout << "< 3. South Halstead" << endl;
    cout << "< 4. Taylor Street" << endl;
}
void listOptions()
{
    cout << "< 1. Get all retaurant info" << endl;
    cout << "< 2. Tell me what's open now" << endl;
    cout << "< 3. Show me a menu" << endl;

    cout << "< 0. To exit" << endl;
}

char* setLocation(int selection)
{
    if(selection == 2) {
        cout << "===Greek-Town===" << endl;
        return "Locations/GreekTown.txt";
    }
}

void foodService(){
    int locationSelect;
    int optionSelect;
    char* location;
    locationLoader lL;
    cout << "Welcome to UIC Food, select an area:" << endl;

    listLocations();
    cin >> locationSelect;
    location = setLocation(locationSelect);

    while(optionSelect != 0)
    {
        listOptions();
        cin >> optionSelect;
        lL.locationLoad(location, optionSelect);
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
