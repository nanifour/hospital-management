#include "Lab.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Lab::Lab()
{
    int index = 0;
    appoinment_id[index] = 0;
    doc_id[index] = 0;
    patient_id[index] = 0;
    slot_id[index] = 0;
    reason[index] = "";
    diagn_id[index] = 0;
    prescribed_med[index] = "";
}

Lab::~Lab()
{
    //dtor
}

Lab::Lab(const Lab& other)
{
    //copy ctor
}

void Lab::addLab()
{
    int i =0;
    int appt_id = 0;
    int docId = 0;
    int pId = 0;
    int slot_id = 0;
    string reason = "";
    int diagId = 0;
    string medicine = "";

           cout << endl << "Please enter a new appointment id: ";
           cin >> appt_id;
           Setappoinment_id(appt_id,i);

           cout << "Please enter the doctor id: ";
           cin >> docId;
           Setdoc_id(docId,i);

           cout << "Please enter the patient id: ";
           cin >> pId;
           Setpatient_id(pId,i);

           cout << "Please enter the slot id (must be greater than 30): " ;
           cin >> slot_id;
           Setslot_id(slot_id,i);

           cout << "Please enter the reason: ";
           cin >> reason;
           Setreason(reason,i);

           cout << "Please enter the diagnosis id: ";
           cin >> diagId;
           Setdiagn_id(diagId,i);

           cout << "Please enter the prescribed medicine: ";
           cin >> medicine;
           Setprescribed_med(medicine,i);

}


void Lab::printLab()
{
     int i =0;
     cout << endl << "Appointment Id: " << Getappoinment_id(i) << endl;
     cout << "DoctorID: " << Getdoc_id(i) << endl;
     cout << "PatientID: " << Getpatient_id(i) << endl;
     cout << "SlotID: " << Getslot_id(i) << endl;
     cout << "Reason: " << Getreason(i) << endl;
     cout << "DiagnosisID: " << Getdiagn_id(i) << endl;
     cout << "Prescribed medicine: " << Getprescribed_med(i) << endl;
}

void Lab::deleteLab()
{

}
