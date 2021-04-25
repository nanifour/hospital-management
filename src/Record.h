#ifndef RECORD_H
#define RECORD_H

#include <string>
#include <iostream>

class Record
{
    //private data
        int record_id[2];
        int patient_id[2];
        std::string doctor_notes[2];

    public:
        Record();                      //default constructor
        ~Record();                     //deconstructor
        Record(const Record& other);  //copy constructor
        void printRecord();
        void addRecord();
        void modifyRecord();

      //Getters and Setters
        int Getrecord_id(int index) { return record_id[index]; }
        int Getpatient_id(int index) { return patient_id[index]; }
        std::string Getdoctor_notes(int index) { return doctor_notes[index]; }

        void Setrecord_id(int rec_id,int index) { record_id[index] = rec_id; }
        void Setpatient_id(int pat_id,int index) { patient_id[index] = pat_id; }
        void Setdoctor_notes(std::string docNotes,int index) { doctor_notes[index] = docNotes; }

};

#endif // RECORD_H
