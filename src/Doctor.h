#ifndef DOCTOR_H
#define DOCTOR_H

#include "Doctor.h"

#include <string>
#include <iostream>

class Doctor
{
    //private data
        int Doc_id[3];
        std::string Doc_username[3];
        std::string Doc_password[3];
        std::string Doc_fullName[3];
        std::string Doc_phoneNum[3];
        std::string Doc_specialty[3];


    public:
        Doctor();                      //default constructor
        ~Doctor();                     //deconstructor
        Doctor(const Doctor& other);  //copy constructor

        void loadDoctor(std::ifstream &InputFile);
        void printDoctor();
        void removeDoc(std::ifstream &InputFile, int size);
        void findDoc();
        void updateInfo();

      //Getters and Setters
        int GetDoc_id(int index) { return Doc_id[index]; }
        std::string GetDoc_username(int index) { return Doc_username[index]; }
        std::string GetDoc_password(int index) { return Doc_password[index]; }
        std::string GetDoc_fullName(int index) { return Doc_fullName[index]; }
        std::string GetDoc_phoneNum(int index) { return Doc_phoneNum[index]; }
        std::string GetDoc_specialty(int index) { return Doc_specialty[index]; }

        void SetDoc_id(int val,int index) { Doc_id[index] = val; }
        void SetDoc_username(std::string d_userName,int index) { Doc_username[index] = d_userName; }
        void SetDoc_password(std::string d_passWord,int index) { Doc_password[index] = d_passWord; }
        void SetDoc_fullName(std::string d_name,int index) { Doc_fullName[index] = d_name; }
        void SetDoc_phoneNum(std::string d_phone,int index) { Doc_phoneNum[index] = d_phone; }
        void SetDoc_specialty(std::string d_special,int index) { Doc_specialty[index] = d_special; }
};

#endif // DOCTOR_H
