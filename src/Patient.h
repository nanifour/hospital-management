#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>

class Patient
{
    //private data
        int Pat_idNum[12];
        int doctor_id[12];
        int record_id[12];
        std::string Pat_name[12];
        std::string Pat_phoneNum[12];
        std::string Pat_gender[12];
        std::string Pat_email[12];
        std::string Pat_bloodType[12];

    public:
        Patient();                       //default constructor
        virtual ~Patient();              //deconstructor
        Patient(const Patient& other);  //copy constructor
        void loadPatient(std::ifstream &InputFile);
        void printPatient();
        void findPatient();
        void findPatByDoc();
        void updatePatInfo();
        void AddPatient();
        void showByTimeRange();
        void removePatient();

       //Getters and Setters
        int GetPat_idNum(int index) { return Pat_idNum[index]; }
        int Getdoctor_id(int index) { return doctor_id[index]; }
        int Getrecord_id(int index) { return record_id[index]; }
        std::string GetPat_name(int index) { return Pat_name[index]; }
        std::string GetPat_phoneNum(int index) { return Pat_phoneNum[index]; }
        std::string GetPat_gender(int index) { return Pat_gender[index]; }
        std::string GetPat_email(int index) { return Pat_email[index]; }
        std::string GetPat_bloodType(int index) { return Pat_bloodType[index]; }

        void SetPat_idNum(int pat_id,int index) { Pat_idNum[index] = pat_id; }
        void Setdoctor_id(int doc_id,int index) { doctor_id[index] = doc_id; }
        void Setrecord_id(int rec_id,int index) { record_id[index] = rec_id; }
        void SetPat_name(std::string p_name,int index) { Pat_name[index] = p_name; }
        void SetPat_phoneNum(std::string p_phone,int index) { Pat_phoneNum[index] = p_phone; }
        void SetPat_gender(std::string p_gen,int index) { Pat_gender[index] = p_gen; }
        void SetPat_email(std::string p_email,int index) { Pat_email[index] = p_email; }
        void SetPat_bloodType(std::string p_blood,int index) { Pat_bloodType[index] = p_blood; }


};

#endif // PATIENT_H
