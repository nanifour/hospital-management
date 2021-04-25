#include "Slot.h"
#include "Date_Time.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Slot::Slot()  //default constructor
{
    int index = 0;

    slot_id[index] = 0;
    date_id[index] = 0;
    doctor_id[index] = 0;
    available[index] = "";
}

Slot::~Slot()  //deconstructor
{
    //dtor
}

Slot::Slot(const Slot& other)  //copy constructor
{
    //copy ctor
}

void Slot::loadSlots(ifstream &InputFile)
{
   int numOfSlots = 0;

   int slotId = 0;
   int dateId = 0;
   int doc_ID = 0;
   string avail = "";

   InputFile >> numOfSlots;

    for (int i = 0; i < numOfSlots; i++){
         InputFile >> slotId;
          Setslot_id(slotId,i);

         InputFile >> dateId;
	      Setdate_id(dateId,i);

         InputFile >> doc_ID;
		  Setdoctor_id(doc_ID,i);

		 InputFile >> avail;
		  Setavailable(avail,i);

        }
}

void Slot::printSlots()
{
    for (int i = 0; i < 30; i++){
  cout << endl << "Slot ID: " << Getslot_id(i) << endl;
  cout << "Date ID: " << Getdate_id(i) << endl;
  cout << "Doctor ID: " << Getdoctor_id(i) << endl;
  cout << "Available: " << Getavailable(i) << endl;
    }
}

void Slot::showAvailable()
{
     bool found = false;
     string str ("available");

  for (int i = 0; i < 30; i++)
    {
      if (Getavailable(i) == str)
      {
         found = true;
      }

      if (found == true)
      {
        cout << endl << "Slot ID: " << Getslot_id(i) << endl;
        cout << "Date ID: " << Getdate_id(i) << endl;
        cout << "Doctor ID: " << Getdoctor_id(i) << endl;
      }
     }

}

void Slot::addSlot()
{


}

void Slot::slotsforDoctor()
{
  int docIDfound = 0;
  cout << endl << "Enter Doctor Id to find slots: ";
  cin >> docIDfound;

      for (int i = 0; i < 30; i++){
      if (docIDfound == Getdoctor_id(i))
            {
               cout << endl << "Slot ID: " << Getslot_id(i) << endl;
               cout << "Date ID: " << Getdate_id(i) << endl;
               cout << "Available: " << Getavailable(i) << endl;
            }
        }
}

void Slot::modifySlot()
{
  int slotId = 0;
  int dateId = 0;
  int doc_ID = 0;
  string avail = "";

    int slotIDfound = 0;;
    cout << endl << "Enter Slot ID to Modify slot: ";
    cin >> slotIDfound;

    for (int i = 0; i < 30; i++)
    {
        if (slotIDfound == Getslot_id(i))
        {
            cout << endl << "Enter SlotID: ";
            cin>> slotId;
            Setslot_id(slotId,i);

            cout << "Enter dateId: ";
            cin >> dateId;
	        Setdate_id(dateId,i);

            cout << "Enter DocID: ";
            cin >> doc_ID;
		    Setdoctor_id(doc_ID,i);

            cout << "Enter available or unavailable: ";
		    cin >> avail;
		    Setavailable(avail,i);
        }

    }

}

void Slot::removeSlot()
{


}

void Slot::slotsforTime()
{

}
