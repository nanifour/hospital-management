#ifndef DIAGNOSES_H
#define DIAGNOSES_H

#include <string>
#include <iostream>

class Diagnoses
{
    //private data
    int diagnosis_id[18];
    std::string disease_name[18];

    public:
        Diagnoses();                          //default constructor
        ~Diagnoses();                         //deconstructor
        Diagnoses(const Diagnoses& other);    //copy constructor
        void loadDiag(std::ifstream &InputFile);
        void printDiag(std::ifstream &InputFile);

    //Getters and Setters
        int Getdiagnosis_id(int index) { return diagnosis_id[index]; }
        std::string Getdisease_name(int index) { return disease_name[index]; }

        void Setdiagnosis_id(int diag_id,int index) { diagnosis_id[index] = diag_id; }
        void Setdisease_name(std::string dis_name,int index) { disease_name[index] = dis_name; }

};

#endif // DIAGNOSES_H
