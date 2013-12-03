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
void courseHTMLfix(char* fileName){
    ifstream fileIN;
    ofstream fileOUT;
    std::string inPrefix = "courseCat/";
    std::string outPrefix = "courseCat/Fixed/";
    std::string inStr = inPrefix + fileName;
    std::string outStr = outPrefix + fileName;
    //fileIN.open(inStr.c_str());
    fileIN.open("courseCat/Academic Skills Program - ASP.htm");
    fileOUT.open(outStr.c_str());
    string line;
    bool writeOn = false;
    fileOUT << "<html>" << endl;
    fileOUT << "<head>" << endl;
    fileOUT << "<link href=\"peterStyle.css\" rel=\"stylesheet\" type=\"text/css\">" << endl;
    fileOUT << "</head>" << endl;
    while(getline(fileIN,line))
    {
        if(line.find("</td></tr>") != std::string::npos) writeOn = false;
        if(line.find("<p><b>") != std::string::npos) writeOn = true;
        if(writeOn) fileOUT << line << endl;
    }
    fileOUT << "</html>" << endl;
    fileIN.close();
    fileOUT.close();
}
void courseService(){
    courseHTMLfix("Academic Skills Program - ASP.htm");
    courseHTMLfix("Accounting - ACTG.htm");
    courseHTMLfix("African American Studies - AAST.htm");
    courseHTMLfix("Anatomy and Cell Biology - ANAT.htm");
    courseHTMLfix("Ancient Greek - GKA.htm");
    courseHTMLfix("Anthropology - ANTH.htm");
    courseHTMLfix("Arabic - ARAB.htm");
    courseHTMLfix("Archaeological Studies - ARST.htm");
    courseHTMLfix("Architecture - ARCH.htm");
    courseHTMLfix("Art - ART.htm");
    courseHTMLfix("Art History - AH.htm");
    courseHTMLfix("Asian American Studies - ASAM.htm");
	courseHTMLfix("Asian Studies - ASST.htm");
    courseHTMLfix("Associated Health Sciences - AHS.htm");
    courseHTMLfix("Basic Medical Sciences - BMS.htm");
    courseHTMLfix("Biochemistry and Molecular Genetics - BCMG.htm");
    courseHTMLfix("Bioengineering - BIOE.htm");
    courseHTMLfix("Biological Sciences - BIOS.htm");
    courseHTMLfix("Biomedical and Health Information Sciences - BHIS.htm");
    courseHTMLfix("Biomedical Visualization - BVIS.htm");
    courseHTMLfix("Biopharmaceutical Sciences - BPS.htm");
    courseHTMLfix("Biostatistics - BSTT.htm");
    courseHTMLfix("Business Administration - BA.htm");
    courseHTMLfix("Campus Courses - CC.htm");
	courseHTMLfix("Catholic Studies - CST.htm");
    courseHTMLfix("Central and Eastern European Studies - CEES.htm");
    courseHTMLfix("Chemical Engineering - CHE.htm");
    courseHTMLfix("Chemistry - CHEM.htm");
    courseHTMLfix("Chinese - CHIN.htm");
    courseHTMLfix("Civil and Materials Engineering - CME.htm");
    courseHTMLfix("Classics - CL.htm");
    courseHTMLfix("Clerkship - Medicine - CLER.htm");
    courseHTMLfix("Clerkship Electives-Chicago - CELE.htm");
    courseHTMLfix("Clerkship Electives-Peoria - PELE.htm");
    courseHTMLfix("Clerkship Electives-Rockford - RELE.htm");
    courseHTMLfix("Clerkship Electives-Urbana - UELE.htm");
	courseHTMLfix("Communication - COMM.htm");
    courseHTMLfix("Community Health Sciences - CHSC.htm");
    courseHTMLfix("Computer Science - CS.htm");
    courseHTMLfix("Criminology, Law, and Justice - CLJ.htm");
    courseHTMLfix("Curriculum and Instruction - CI.htm");
    courseHTMLfix("Dental Administration - DADM.htm");
    courseHTMLfix("Dental Behavioral Science - DBSC.htm");
    courseHTMLfix("Dentistry - Applied Oral and Behavioral Sciences - DAOB.htm");
    courseHTMLfix("Dentistry - Biomedical and Clinical Sciences - DBCS.htm");
    courseHTMLfix("Dentistry - Community Learning Experience - DCLE.htm");
    courseHTMLfix("Dentistry - Oral Systemic Issues - DOSI.htm");
    courseHTMLfix("Dentistry - Oral Systemic Topics - DOST.htm");
	courseHTMLfix("Design - DES.htm");
    courseHTMLfix("Disability and Human Development - DHD.htm");
    courseHTMLfix("Earth and Environmental Sciences - EAES.htm");
    courseHTMLfix("Economics - ECON.htm");
    courseHTMLfix("Education - ED.htm");
    courseHTMLfix("Educational Policy Studies - EDPS.htm");
    courseHTMLfix("Educational Psychology - EPSY.htm");
    courseHTMLfix("Electrical and Computer Engineering - ECE.htm");
    courseHTMLfix("Endodontics - ENDO.htm");
    courseHTMLfix("Energy Engineering - ENER.htm");
    courseHTMLfix("Engineering - ENGR.htm");
    courseHTMLfix("English - ENGL.htm");
	courseHTMLfix("English as a Second Language - ESL.htm");
    courseHTMLfix("Entrepreneurship - ENTR.htm");
    courseHTMLfix("Environmental and Occupational Health Sciences - EOHS.htm");
    courseHTMLfix("Epidemiology - EPID.htm");
    courseHTMLfix("Finance - FIN.htm");
    courseHTMLfix("French - FR.htm");
    courseHTMLfix("Gender and Women's Studies - GWS.htm");
    courseHTMLfix("Geography - GEOG.htm");
    courseHTMLfix("Germanic Studies - GER.htm");
    courseHTMLfix("Graduate College - GC.htm");
    courseHTMLfix("Graduate College - Life Sciences - GCLS.htm");
    courseHTMLfix("Guaranteed Admissions Medicine - GAMD.htm");
	courseHTMLfix("Health Information Management - HIM.htm");
    courseHTMLfix("Health Policy and Administration - HPA.htm");
    courseHTMLfix("Hebrew - HEB.htm");
    courseHTMLfix("Hindi-Urdu - HNUR.htm");
    courseHTMLfix("Histology - HSTL.htm");
    courseHTMLfix("History - HIST.htm");
    courseHTMLfix("Honors College Courses - HON.htm");
    courseHTMLfix("Human Nutrition - HN.htm");
    courseHTMLfix("Industrial Engineering - IE.htm");
    courseHTMLfix("Information and Decision Sciences - IDS.htm");
    courseHTMLfix("Information Technology - IT.htm");
    courseHTMLfix("Interdisciplinary Public Health Sciences - IPHS.htm");
	courseHTMLfix("Interdisciplinary Studies in the Arts - ISA.htm");
    courseHTMLfix("International Studies - INST.htm");
    courseHTMLfix("Italian - ITAL.htm");
    courseHTMLfix("Japanese - JPN.htm");
    courseHTMLfix("Jewish Studies - JST.htm");
    courseHTMLfix("Kinesiology - KN.htm");
    courseHTMLfix("Latin - LAT.htm");
    courseHTMLfix("Latin American and Latino Studies - LALS.htm");
    courseHTMLfix("Learning Sciences - LRSC.htm");
    courseHTMLfix("Liberal Arts and Sciences - LAS.htm");
    courseHTMLfix("Library and Information Science - LIB.htm");
    courseHTMLfix("Linguistics - LING.htm");
	courseHTMLfix("Literatures, Cultural Studies, and Linguistics - LCSL.htm");
    courseHTMLfix("Lithuanian - LITH.htm");
    courseHTMLfix("Management - MGMT.htm");
    courseHTMLfix("Marketing - MKTG.htm");
    courseHTMLfix("Master of Business Administration - MBA.htm");
    courseHTMLfix("Master of Engineering - MENG.htm");
    courseHTMLfix("Mathematical Computer Science - MCS.htm");
    courseHTMLfix("Mathematics - MATH.htm");
    courseHTMLfix("Mathematics Teaching - MTHT.htm");
    courseHTMLfix("Mechanical Engineering - ME.htm");
    courseHTMLfix("Medical Biotechnology - MBT.htm");
    courseHTMLfix("Medical Education - MHPE.htm");
	courseHTMLfix("Medical Humanities - MHUM.htm");
    courseHTMLfix("Medicinal Chemistry - MDCH.htm");
    courseHTMLfix("Medicinal Chemistry and Pharmacognosy - PMMP.htm");
    courseHTMLfix("Microbiology and Immunology - MIM.htm");
    courseHTMLfix("Military Science - MILS.htm");
    courseHTMLfix("Modern Greek - GKM.htm");
    courseHTMLfix("Moving Image Arts - MOVI.htm");
    courseHTMLfix("Music - MUS.htm");
    courseHTMLfix("Native American Studies - NAST.htm");
    courseHTMLfix("Natural Sciences - NATS.htm");
    courseHTMLfix("Naval Science - NS.htm");
    courseHTMLfix("Neuroscience - NEUS.htm");
	courseHTMLfix("Nursing Core - NURS.htm");
    courseHTMLfix("Nursing Elective - NUEL.htm");
    courseHTMLfix("Nursing Practicum - NUPR.htm");
    courseHTMLfix("Nursing Specialty - NUSP.htm");
    courseHTMLfix("Occupational Therapy - OT.htm");
    courseHTMLfix("Oral Anatomy - ORLA.htm");
    courseHTMLfix("Oral and Maxillofacial Surgery - OSUR.htm");
    courseHTMLfix("Oral Medicine and Diagnostic Sciences - OMDS.htm");
    courseHTMLfix("Oral Sciences - OSCI.htm");
    courseHTMLfix("Orthodontics - ORTD.htm");
    courseHTMLfix("Pathology - PATH.htm");
    courseHTMLfix("Patient Safety Leadership - PSL.htm");
	courseHTMLfix("Pediatric Dentistry - PEDD.htm");
    courseHTMLfix("Periodontics - PERI.htm");
    courseHTMLfix("Pharmacognosy - PMPG.htm");
    courseHTMLfix("Pharmacology - PCOL.htm");
    courseHTMLfix("Pharmacy - PHAR.htm");
    courseHTMLfix("Pharmacy Practice - PMPR.htm");
    courseHTMLfix("Pharmacy Systems, Outcomes and Policy - PSOP.htm");
    courseHTMLfix("Philosophy - PHIL.htm");
    courseHTMLfix("Physical Therapy - PT.htm");
    courseHTMLfix("Physics - PHYS.htm");
    courseHTMLfix("Physiology and Biophysics - PHYB.htm");
    courseHTMLfix("Polish - POL.htm");
	courseHTMLfix("Political Science - POLS.htm");
    courseHTMLfix("Portuguese - PORT.htm");
    courseHTMLfix("Preclinical Medicine - PRCL.htm");
    courseHTMLfix("Prosthodontics - PROS.htm");
    courseHTMLfix("Psychology - PSCH.htm");
    courseHTMLfix("Public Administration - PA.htm");
    courseHTMLfix("Public Health - PUBH.htm");
    courseHTMLfix("Public Policy Analysis - PPA.htm");
    courseHTMLfix("Religious Studies - RELS.htm");
    courseHTMLfix("Restorative Dentistry - REST.htm");
    courseHTMLfix("Russian - RUSS.htm");
    courseHTMLfix("Slavic and Baltic Languages and Literatures - SLAV.htm");
	courseHTMLfix("Social Work - SOCW.htm");
    courseHTMLfix("Sociology - SOC.htm");
    courseHTMLfix("Spanish - SPAN.htm");
    courseHTMLfix("Special Education - SPED.htm");
    courseHTMLfix("Specialty Medicine - SPEC.htm");
    courseHTMLfix("Statistics - STAT.htm");
    courseHTMLfix("Study Abroad - SABR.htm");
    courseHTMLfix("Surgery - SURG.htm");
    courseHTMLfix("Theatre - THTR.htm");
    courseHTMLfix("Urban and Public Affairs - UPA.htm");
    courseHTMLfix("Urban Planning and Policy - UPP.htm");
}
int main()
{
    courseService();
    //foodService();
    return 0;
}
