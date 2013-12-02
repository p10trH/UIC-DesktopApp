#include "../include/menuLoader.h"

menuLoader::menuLoader()
{
    //ctor
}

menuLoader::~menuLoader()
{
    //dtor
}
int menuLoader::extractPrice(string){

}
int menuLoader::charInString(string input, char look){
    int i;
    int counter=0;
    for(i=0; i < input.length(); i++){
        if(input.at(i) == look){
            counter++;
        }
    }
    return counter;
}

void menuLoader::menuLoad(char* filename)
{
    int startPrice =0;
    int endPrice =0;
    string line;
    ifstream file;
    file.open(filename);
    while(getline(file,line))
    {
        if(line.at(0) != '#'){
            if(charInString(line, '$') == 1 || true)
            {
                startPrice = line.find('$')+1;
                endPrice = line.find('.') + 3;
                cout << line.substr(0,startPrice-4) << " : " << line.substr(startPrice, (endPrice - startPrice)) << endl;
            } else {

            }
            //cout << line << endl;
        } else {
            //cout << extractName(line) << endl;
        }
    }
}
