#include "locationloader.h"

locationLoader::locationLoader()
{
}

int locationLoader::extractOTime(QString input)
{
    int output= 0;
    int middle;
    if(input.indexOf(":") != -1)
    {
        middle = input.indexOf(":");
        output += (input.at(middle + 2).digitValue());
        output += (input.at(middle + 1).digitValue())*10;
        output += (input.at(middle - 1).digitValue())*100;
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
int locationLoader::extractCTime(QString input)
{
    int output= 0;
    int middle;
    if(input.indexOf(":") != -1)
    {
        middle = input.lastIndexOf(":");
        output += (input.at(middle + 2).digitValue());
        output += (input.at(middle + 1).digitValue())*10;
        output += (input.at(middle - 1).digitValue())*100;
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

QString locationLoader::locationLoad(QString filename, int option)
{
    QString infoOut = "";
    /*
    cout << "< 1. Get all retaurant info" << endl;
    */
    QString line;
    QString name;
    QString adress1;
    QString adress2;
    QString phone;
    QString hoursMon;
    QString hoursTue;
    QString hoursWed;
    QString hoursThr;
    QString hoursFri;
    QString hoursSat;
    QString hoursSun;
    QString menuFile;
    QString hashTags;

    QFile mFile(filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "could not open file for read";
        return "";
    }
    QTextStream in(&mFile);

    /*string menuSelectName;
    if(option == 3){
        cout << "What menu would you like to see?" << endl;
        //cin >> menuSelectName;
        menuSelectName = "Primos Chicago Pizza";
    }*/
    while(!in.atEnd()){
        name = in.readLine();
        adress1 = in.readLine();
        adress2 = in.readLine();
        phone = in.readLine();
        hoursMon = in.readLine();
        hoursTue = in.readLine();
        hoursWed = in.readLine();
        hoursThr = in.readLine();
        hoursFri = in.readLine();
        hoursSat = in.readLine();
        hoursSun = in.readLine();
        menuFile = in.readLine();
        hashTags = in.readLine();
        line = in.readLine();
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
			//============
			//LOOK HERE
			//=================
				//Original Code:
				//QString hoursOnDay = hoursSun;
				//int currentTime = 1350;
				
				//New Code:
			QString hoursOnDay;
			int currentTime;
			
			QDate date = QDate::currentDate();
			QString dateString = date.toString();
			dateString = dateString.mid(0,2);
			if(dateString == "Mo"){
				hoursOnDay = hoursMon;
			} else if (dateString == "Tu") {
				hoursOnDay = hoursTue;
			} else if (dateString == "We") {
				hoursOnDay = hoursWed;
			} else if (dateString == "Th") {
				hoursOnDay = hoursThr;
			} else if (dateString == "Fr") {
				hoursOnDay = hoursFri;
			} else if (dateString == "Sa") {
				hoursOnDay = hoursSat;
			} else if (dateString == "Su") {
				hoursOnDay = hoursSun;
			}
			
			QTime time = QTime::currentTime();
			QString timeString = time.toString();
			currentTime += timeString.mid(0,timeString.indexOf(":")).toInt()*100;
			currentTime += timeString.mid(timeString.indexOf(":")+1,2).toInt();
			//=================
			//STOP LOOKING HERE
			//=================
            int openTime = extractOTime(hoursOnDay);
            int closeTime = extractCTime(hoursOnDay);
            if(openTime < currentTime && currentTime < closeTime){
                //cout << name << endl;
                infoOut += name + "\n";
            } else if (closeTime < openTime && openTime < currentTime) {
                //cout << name << endl;
                infoOut += name + "\n";
            } else if (hoursOnDay.indexOf("Open 24 hours") != -1) {
                //cout << name << endl;
                infoOut += name + "\n";
            }
        }/* else if (option == 3) {
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
        } */
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
    mFile.close();
    return infoOut;
}
