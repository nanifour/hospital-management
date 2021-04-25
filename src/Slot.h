#ifndef SLOT_H
#define SLOT_H

#include <string>
#include <iostream>

class Slot
{
    //private data
        int slot_id[40];
        int date_id[40];
        int doctor_id[40];
        std::string available[40];

    public:
        Slot();                    //default constructor
        ~Slot();                   //deconstructor
        Slot(const Slot& other);  //copy constructor
        void loadSlots(std::ifstream &InputFile);
        void printSlots();
        void showAvailable();
        void addSlot();
        void slotsforDoctor();
        void modifySlot();
        void slotsforTime();
        void removeSlot();

       //Getters and Setters
        int Getslot_id(int index) { return slot_id[index]; }
        int Getdate_id(int index) { return date_id[index]; }
        int Getdoctor_id(int index) { return doctor_id[index]; }
        std::string Getavailable(int index) { return available[index]; }

        void Setslot_id(int s_id,int index) { slot_id[index] = s_id; }
        void Setdate_id(int d_id,int index) { date_id[index] = d_id; }
        void Setdoctor_id(int doc_id,int index) { doctor_id[index] = doc_id; }
        void Setavailable(std::string avail,int index) { available[index] = avail; }

};

#endif // SLOT_H
