#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include <iostream>

class Appointment
{
     //private data
        int Appoint_id[200];
        int Doctor_id[200];
        int Patient_id[200];
        int Slot_id[200];
        std::string visit_reason[200];
        int Diagnosis_id[200];
        std::string Prescribed_medication[200];

    public:
        Appointment();                         //default constructor
        ~Appointment();                         //deconstructor
        Appointment(const Appointment& other);  //copy constructor
        void addAppt(std::ofstream &OutputFile);
        void printAppt();
        void modifyAppt(std::ifstream &InputFile);
        void removeAppt();
        void loadAppointments(std::ifstream &InputFile);  //save to file

     //Getters and Setters
        int GetAppoint_id(int index) { return Appoint_id[index]; }
        int GetDoctor_id(int index) { return Doctor_id[index]; }
        int GetPatient_id(int index) { return Patient_id[index]; }
        int GetSlot_id(int index) { return Slot_id[index]; }
        std::string Getvisit_Reason(int index) {return visit_reason[index];}
        int GetDiagnosis_id(int index) { return Diagnosis_id[index]; }
        std::string GetPrescribed_medication(int index) { return Prescribed_medication[index]; }

        void SetAppoint_id(int app_id,int index) { Appoint_id[index] = app_id; }
        void SetDoctor_id(int doc_id,int index) { Doctor_id[index] = doc_id; }
        void SetPatient_id(int pat_id,int index) { Patient_id[index] = pat_id; }
        void SetSlot_id(int sl_id,int index) { Slot_id[index] = sl_id; }
        void Setvisit_reason(std::string reas,int index) { visit_reason[index] = reas; }
        void SetDiagnosis_id(int diag_id,int index) { Diagnosis_id[index] = diag_id; }
        void SetPrescribed_medication(std::string prescript,int index) { Prescribed_medication[index] = prescript; }

};

#endif // APPOINTMENT_H
