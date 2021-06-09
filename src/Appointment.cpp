#include "Appointment.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Appointment::Appointment()  //default constructor
{
    int index = 0;
        Appoint_id[index] = 0;
        Doctor_id[index] = 0;
        Patient_id[index] = 0;
        Slot_id[index] = 0;
        visit_reason[index] = "";
        Diagnosis_id[index] = 0;
        Prescribed_medication[index] = "";
}

Appointment::~Appointment() //deconstructor
{
    //dtor
}

Appointment::Appointment(const Appointment& other)  //copy constructor
{
    //copy ctor
}

void Appointment::addAppt()
{
           int i =0;
           int appt_id = 0;
           int docId = 0;
           int pId = 0;
           int slot_id = 0;
           string reason = "";
           int diagId = 0;
           string medicine = "";

           cout << "Please enter a new appointment id: ";
           cin >> appt_id;
           SetAppoint_id(appt_id,i);

           cout << "Please enter the doctor id: ";
           cin >> docId;
           SetDoctor_id(docId,i);

           cout << "Please enter the patient id: ";
           cin >> pId;
           SetPatient_id(pId,i);

           cout << "Please enter the slot id: " ;
           cin >> slot_id;
           SetSlot_id(slot_id,i);

           cout << "Please enter the reason: ";
           cin >> reason;
           Setvisit_reason(reason,i);

           cout << "Please enter the diagnosis id: ";
           cin >> diagId;
           SetDiagnosis_id(diagId,i);

           cout << "Please enter the prescribed medicine: ";
           cin >> medicine;
           SetPrescribed_medication(medicine,i);

}

void Appointment::printAppt()
{
     int i =0;
     cout << endl << "Id: " <<GetAppoint_id(i) << endl;
     cout << "DoctorID: " << GetDoctor_id(i) << endl;
     cout << "PatientID: " << GetPatient_id(i) << endl;
     cout << "SlotID: " << GetSlot_id(i) << endl;
     cout << "Reason: " << Getvisit_Reason(i) << endl;
     cout << "DiagnosisID: " << GetDiagnosis_id(i) << endl;
}

void Appointment::modifyAppt()
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
           SetAppoint_id(appt_id,i);

           cout << "Please enter the doctor id: ";
           cin >> docId;
           SetDoctor_id(docId,i);

           cout << "Please enter the patient id: ";
           cin >> pId;
           SetPatient_id(pId,i);

           cout << "Please enter the slot id (must be greater than 30): " ;
           cin >> slot_id;
           SetSlot_id(slot_id,i);

           cout << "Please enter the reason: ";
           cin >> reason;
           Setvisit_reason(reason,i);

           cout << "Please enter the diagnosis id: ";
           cin >> diagId;
           SetDiagnosis_id(diagId,i);

           cout << "Please enter the prescribed medicine: ";
           cin >> medicine;
           SetPrescribed_medication(medicine,i);

}
