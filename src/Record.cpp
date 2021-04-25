#include "Record.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Record::Record()  //default constructor
{
  int index = 0;

  record_id[index] = 0;
  patient_id[index] = 0;
  doctor_notes[index] = "";
}

Record::~Record()  //deconstructor
{
    //dtor
}

Record::Record(const Record& other)  //copy constructor
{
    //copy ctor
}

void Record::printRecord()
{
   int i = 0;
   cout << endl << "Record ID: " << Getrecord_id(i) << endl;
   cout << "Patient ID: " << Getpatient_id(i) << endl;
   cout << "Doctor note: " << Getdoctor_notes(i) << endl;
}

void Record::addRecord()
{
   int i = 0;

   int r_id = 0;
   int p_id = 0;
   string line = "";

   cout << endl << "Enter Record Id: " ;
   cin >> r_id;
   Setrecord_id(r_id,i);

   cout << "Enter Patient Id: ";
   cin >> p_id;
   Setpatient_id(p_id,i);

   cout << "Enter Doctor Note: ";
   getline(cin,line);
   Setdoctor_notes(line,i);

   i++;
}
void Record::modifyRecord()
{

}
