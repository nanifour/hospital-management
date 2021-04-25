#include "Doctor.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>


using namespace std;

Doctor::Doctor()  //default constructor
{
    int index = 0;

    Doc_id[index] = 0;
    Doc_username[index] = "";
    Doc_password[index] = "";
    Doc_fullName[index] = "";
    Doc_phoneNum[index] = "";
    Doc_specialty[index] = "";

}

Doctor::~Doctor()  //deconstructor
{
    //dtor
}

Doctor::Doctor(const Doctor& other)  //copy constructor
{
    //copy ctor
}

void Doctor::loadDoctor(ifstream &InputFile)
{
    Doctor docts;

   int numOfDoctors = 0;
   InputFile >> numOfDoctors;

   int id = 0;
   string un = "";
   string pw = "";
   string fn = "";
   string pn = "";
   string sp = "";

for(int i=0; i<numOfDoctors; i++)
{
InputFile >> id;
SetDoc_id(id,i);

InputFile >> un;
SetDoc_username(un,i);

InputFile >> pw;
SetDoc_password(pw,i);

InputFile >> fn;
SetDoc_fullName(fn,i);

InputFile >> pn;
SetDoc_phoneNum(pn,i);

InputFile >> sp;
SetDoc_specialty(sp,i);
}

}
void Doctor::printDoctor()
{
    for (int i = 0; i < 3; i++){
  cout << endl << "ID: " << GetDoc_id(i) << endl;
  cout << "Username: " << GetDoc_username(i) << endl;
  cout << "Password: " << GetDoc_password(i) << endl;
  cout << "Full Name: " << GetDoc_fullName(i) << endl;
  cout << "Phone Number: " << GetDoc_phoneNum(i) << endl;
  cout << "Specialty: " << GetDoc_specialty(i) << endl;
    }
}

void Doctor::removeDoc(std::ifstream &InputFile, int size)
{
    /*int toBeMoved = 0;
    cout << endl << "Enter the id of the Doctor to delete: ";
    cin >> toBeMoved;

int index =0;
   toBeMoved = index + 1;
   while (toBeMoved < size) {
   array[toBeMoved] = array[toBeMoved+1];
   ++toBeMoved;
   }
   --size;*/

}

void Doctor::findDoc()
{
    int idName = 0;
    cout << endl << "Enter the id of the Doctor to search: ";
    cin >> idName;

    for (int i = 0; i < 3; i++)
    {
        if (idName == GetDoc_id(i))
        {
           cout << endl << "Username: " << GetDoc_username(i) << endl;
           cout << "Password: " << GetDoc_password(i) << endl;
           cout << "Full Name: " << GetDoc_fullName(i) << endl;
           cout << "Phone Number: " << GetDoc_phoneNum(i) << endl;
           cout << "Specialty: " << GetDoc_specialty(i) << endl;
        }
    }

}

void Doctor::updateInfo()
{
    string item = "";
    cout << endl << "Enter doctor by name to update info: ";
    cin >> item;

    int id = 0;
   string un = "";
   string pw = "";
   string fn = "";
   string pn = "";
   string sp = "";

    for (int i = 0; i < 3; i++)
    {
        if (item == GetDoc_fullName(i))
        {
           cout << endl << "Update Doctor id: ";
           cin >> id;
           SetDoc_id(id,i);

           cout << "Update Doctor username: ";
           cin >> un;
           SetDoc_username(un,i);

           cout << "Update Doctor password: ";
           cin >> pw;
           SetDoc_password(pw,i);

           cout << "Update Doctor Full Name (No space between): ";
           cin >> fn;
           SetDoc_fullName(fn,i);

           cout << "Update Doctor Phone Number: ";
           cin >> pn;
           SetDoc_phoneNum(pn,i);

           cout << "Update Doctor Specialty: ";
           cin >> sp;
           SetDoc_specialty(sp,i);
        }
    }
}
