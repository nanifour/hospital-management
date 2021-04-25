#ifndef LAB_H
#define LAB_H

#include <string>
#include <iostream>

class Lab
{
    //private data
        int appoinment_id[2];
        int doc_id[2];
        int patient_id[2];
        int slot_id[2];
        std::string reason[2];
        int diagn_id[2];
        std::string prescribed_med[2];

    public:
        Lab();                  //default constructor
        ~Lab();                  //deconstructor
        Lab(const Lab& other);   //copy constructor
        void addLab();
        void printLab();
        void deleteLab();

        //Getters and Setters
        int Getappoinment_id(int index) { return appoinment_id[index]; }
        int Getdoc_id(int index) { return doc_id[index]; }
        int Getpatient_id(int index) { return patient_id[index]; }
        int Getslot_id(int index) { return slot_id[index]; }
        std::string Getreason(int index) { return reason[index]; }
        int Getdiagn_id(int index) { return diagn_id[index]; }
        std::string Getprescribed_med(int index) { return prescribed_med[index]; }

        void Setappoinment_id(int l_appt,int index) { appoinment_id[index] = l_appt; }
        void Setdoc_id(int ld_id,int index) { doc_id[index] = ld_id; }
        void Setpatient_id(int l_pat,int index) { patient_id[index] = l_pat; }
        void Setslot_id(int l_sid,int index) { slot_id[index] = l_sid; }
        void Setreason(std::string l_rea,int index) { reason[index] = l_rea; }
        void Setdiagn_id(int l_diag,int index) { diagn_id[index] = l_diag; }
        void Setprescribed_med(std::string l_prescript,int index) { prescribed_med[index] = l_prescript; }
};

#endif // LAB_H
