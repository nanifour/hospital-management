#include "Patient.h"
#include "Doctor.h"
#include "Date_Time.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Patient::Patient()  //default constructor
{
    int index = 0;

    Pat_idNum[index] = 0;
    doctor_id[index] = 0;
    record_id[index] = 0;
    Pat_name[index] = "";
    Pat_phoneNum[index] = "";
    Pat_gender[index] = "";
    Pat_email[index] = "";
    Pat_bloodType[index] = "";
}

Patient::~Patient()  //deconstructor
{
    //dtor
}

Patient::Patient(const Patient& other)  //copy constructor
{
    //copy ctor
}

void Patient::loadPatient(ifstream &InputFile)
{
   int numOfPatients = 0;
   int p_id = 0;
   int d_id = 0;
   int r_id = 0;
   string name = "";
   string phone = "";
   string gender = "";
   string email = "";
   string blood = "";


   InputFile >> numOfPatients;

    int i = 0;

    /* for (int i = 0; i < numOfPatients; i++) */
    while(!InputFile.eof())
    {

         InputFile >> p_id;
          SetPat_idNum(p_id,i);

         InputFile >> d_id;
	      Setdoctor_id(d_id,i);

         InputFile >> r_id;
		  Setrecord_id(r_id,i);

		 InputFile >> name;
		  SetPat_name(name,i);

		 InputFile >> phone;
		  SetPat_phoneNum(phone,i);

		 InputFile >> gender;
		  SetPat_gender(gender,i);

		 InputFile >> email;
          SetPat_email(email,i);

		 InputFile >> blood;
          SetPat_bloodType(blood,i);

          i++;
        }
}

void Patient::printPatient()
{
    for (int i = 0; i < 10; i++){
  cout << endl << "ID: " << GetPat_idNum(i) << endl;
  cout << "Doctor ID: " << Getdoctor_id(i) << endl;
  cout << "Record ID: " << Getrecord_id(i) << endl;
  cout << "Name: " << GetPat_name(i) << endl;
  cout << "Phone Number: " << GetPat_phoneNum(i) << endl;
  cout << "Gender: " << GetPat_gender(i) << endl;;
  cout << "Email: " << GetPat_email(i) << endl;
  cout << "Blood Type: " << GetPat_bloodType(i) <<endl << endl;
    }
}

void Patient::findPatient()
{
    string nameToFind = "";
    cout << endl << "Enter the name of the patient to find: ";
    cin >> nameToFind;

    for (int i = 0; i < 10; i++){
    if (nameToFind == GetPat_name(i))
    {
       cout << endl << "ID: " << GetPat_idNum(i) << endl;
       cout << "Doctor ID: " << Getdoctor_id(i) << endl;
       cout << "Record ID: " << Getrecord_id(i) << endl;
       cout << "Phone Number: " << GetPat_phoneNum(i) << endl;
       cout << "Gender: " << GetPat_gender(i) << endl;;
       cout << "Email: " << GetPat_email(i) << endl;
       cout << "Blood Type: " << GetPat_bloodType(i) <<endl << endl;
    }

    }
}

void Patient::findPatByDoc()
{
    Doctor doc;
    string docName = "";
    cout << endl << "Enter the name of the Doctor to find Patient: ";
    cin >> docName;

    bool nameFound = false;
    bool idFoundinDoc = false;
    bool idFoundinPat = false;

    for (int i = 0; i < 10; i++)
    {
    if (docName == doc.GetDoc_fullName(i))
        nameFound = true;
    }

    for (int i = 0; i <10; i++)
    {
        if (Getdoctor_id(i) == doc.GetDoc_id(i))
        idFoundinDoc = true;
    }

    for (int i = 0; i <10; i++)
    {

        if (Getdoctor_id(i) == doc.GetDoc_id(i))
        idFoundinDoc = true;
    }

    if (idFoundinDoc == true && idFoundinPat == true)
    {
        cout << endl << "TRUEEEEE" << endl;
    }

     for (int i = 0; i <10; i++)
      {
        if (nameFound == true && idFoundinDoc == true && idFoundinPat)
        {
       cout << endl << "ID: " << GetPat_idNum(i) << endl;
       cout << "Doctor ID: " << Getdoctor_id(i) << endl;
       cout << "Record ID: " << Getrecord_id(i) << endl;
       cout << "Name: " << GetPat_name(i) << endl;
       cout << "Phone Number: " << GetPat_phoneNum(i) << endl;
       cout << "Gender: " << GetPat_gender(i) << endl;;
       cout << "Email: " << GetPat_email(i) << endl;
       cout << "Blood Type: " << GetPat_bloodType(i) <<endl << endl;
        }
    }
}

void Patient::updatePatInfo()
{
    string item = "";
    cout << endl << "Enter Patient by name to update info: ";
    cin >> item;

   int p_id = 0;
   int d_id = 0;
   int r_id = 0;
   string name = "";
   string phone = "";
   string gender = "";
   string email = "";
   string blood = "";


    for (int i = 0; i < 20; i++)
    {
        if (item == GetPat_name(i))
        {
           cout << endl << "Update Patient id: ";
           cin >> p_id;
           SetPat_idNum(p_id,i);

           cout << "Update Doctor id: ";
           cin >> d_id;
           Setdoctor_id(d_id,i);

           cout << "Update Record id: ";
           cin >> r_id;
           Setrecord_id(r_id,i);

           cout << "Update Patient name: ";
           cin >> name;
           SetPat_name(name,i);

           cout << "Update Patient phone: ";
           cin >> phone;
           SetPat_phoneNum(phone,i);

           cout << "Update Patient gender(f or m): ";
           cin >> gender;
           SetPat_gender(gender,i);

           cout << "Update Patient email: ";
           cin >> email;
           SetPat_email(email,i);

           cout << "Update Patient blood type: ";
           cin >> blood;
           SetPat_bloodType(blood,i);

        }
    }

}

void Patient::AddPatient(ofstream &OutputFile)
{
   int i = 12;

   int p_id = 0;
   int d_id = 0;
   int r_id = 0;
   string name = "";
   string phone = "";
   string gender = "";
   string email = "";
   string blood = "";



        cout << endl << "Enter a Patient id: ";
        cin >> p_id;
        SetPat_idNum(p_id, i);
        //save to file
        OutputFile << endl;
        OutputFile << p_id << endl;

        cout << "Enter a Doctor id (: ";
        cin >> d_id;
        Setdoctor_id(d_id, i);
        OutputFile << d_id << endl;

        cout << "Enter a Record id: ";
        cin >> r_id;
        Setrecord_id(r_id, i);
        OutputFile << r_id << endl;

        cout << "Enter Patient name (no spaces) : ";
        cin >> name;
        SetPat_name(name, i);
        OutputFile << name << endl;

        cout << "Enter Patient phone (10 digit): ";
        cin >> phone;
        SetPat_phoneNum(phone, i);
        OutputFile << phone << endl;

        cout << "Enter Patient gender (char): ";
        cin >> gender;
        SetPat_gender(gender, i);
        OutputFile << gender << endl;

        cout << "Enter Patient email: ";
        cin >> email;
        SetPat_email(email, i);
        OutputFile << email << endl;

        cout << "Enter Patient blood type: ";
        cin >> blood;
        SetPat_bloodType(blood, i);
        OutputFile << blood << endl;


}

void Patient::showByTimeRange()
{

}

void Patient::removePatient()
{

}
