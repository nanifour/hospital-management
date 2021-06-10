#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "Patient.h"
#include "Doctor.h"
#include "Slot.h"
#include "Date_Time.h"
#include "Record.h"
#include "Diagnoses.h"
#include "Appointment.h"
#include "Lab.h"

using namespace std;

void processMenu();

int main()
{
    cout << "Welcome to HMS. Please choose an action: \n\n" << endl;

    processMenu();

    system("pause");

    return 0;
}

///==============================================================
void processMenu()
{
//variable declarations
char choice = 0;
char options = 0;

//Class Objects
Appointment app;
Slot sl;
Doctor d;
Patient pat;
Record rec;
Lab la;

//Open input files
ifstream PatFile;
ofstream PatAddFile;
ifstream DocFile;
ifstream SlotFile;
ifstream DateTimeFile;
ifstream DiagFile;
PatFile.open("./text-files/Patients.txt", ios::in);
PatAddFile.open("./text-files/Patients.txt", ios::app);  //append to end of file
DocFile.open("./text-files/Doctors.txt", ios::in);
SlotFile.open("./text-files/Slots.txt", ios::in);
DateTimeFile.open("./text-files/Date_Time.txt", ios::in);
DiagFile.open("./text-files/Diagnosis.txt", ios::in);

//Start menu options
while(true) {
cout << endl <<"MAIN MENU:  " << endl;
cout <<"==========================" << endl;
cout << "1. Manage Appointments. " << endl;
cout << "2. Manage Slots. " << endl;
cout << "3. Manage Doctors. " <<endl;
cout << "4. Manage Patients. " << endl;
cout << "5. Manage Patient's records. " << endl;
cout << "6. Manage Lab. " << endl;
cout << "7. Quit Program" << endl << endl;

cout << "Choose from options 1-7:  ";
cin >> choice;

while(cin.get() != '\n');

//====================================================================
if(choice == '1'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 1: Appointments " << endl;
cout <<"==========================" << endl;
cout << "1. Schedule a new appointment. " << endl;
cout << "2. Show all appointment. " << endl;
cout << "3. Modify/reschedule an existing appointment. " << endl;
cout << "4. Remove an appointment. " << endl;
cout << "5. Back to Main Menu. " << endl << endl;

      cout <<"Choose from options 1-5:  ";
      cin >> options;
      while(options != '\n'){

         if(options == '1')
         {
           app.addAppt();
           app.printAppt();
           break;
         }
         else if(options == '2')
         {
            app.printAppt();
            break;
         }
         else if(options == '3')
         {
             app.modifyAppt();
           break;
         }
         else if(options == '4')
         {
             cout << endl << "Option coming soon . . ." << endl;
           break;
         }
         else if(options == '5')
         {
           break;
         }
      }
}
//====================================================================
else if(choice == '2'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 2: Slots" << endl;
cout <<"==========================" << endl;
cout << "1. Show available slots. " << endl;
cout << "2. Show unavailable slots. " << endl;
cout << "3. Add new slot(s). " << endl;
cout << "4. Show slots between two times. " << endl;
cout << "5. Show all slots. " << endl;
cout << "6. Show all slots for a certain doctor. " << endl;
cout << "7. Modify slot information. " << endl;
cout << "8. Remove a slot. " << endl;
cout << "9. Back to Main Menu. " << endl << endl;

       cout <<"Choose from options 1-9:  ";
       cin >> options;
       while(options != '\n'){

          if(options == '1')
         {
           sl.showAvailable();
           break;
         }
         else if(options == '2')
         {
             sl.showUnavailable();
           break;
         }
         else if(options == '3')
         {
           sl.addSlot();
           break;
         }
         else if(options == '4')
         {
             cout << endl << "Option coming soon . . ." << endl;
           break;
         }
         else if(options == '5')
         {
            sl.loadSlots(SlotFile);
            sl.printSlots();
            break;
         }
         else if(options == '6')
         {
            sl.slotsforDoctor();
            break;
         }
         else if(options == '7')
         {
           sl.modifySlot();
           break;
         }
         else if(options == '8')
         {
           cout << endl << "Option coming soon . . ." << endl;
           break;
         }
          else if(options == '9')
         {
           break;
         }
       }
}
//====================================================================
else if (choice == '3'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 3: Doctors" << endl;
cout <<"==========================" << endl;
cout << "1. Show all doctors. " << endl;
cout << "2. Update doctor's info. " << endl;
cout << "3. Delete doctor. " << endl;
cout << "4. Search for doctor. " << endl;
cout << "5. Go back. " << endl << endl;

       cout <<"Choose from options 1-5:  ";
       cin >> options;
       while(options != '\n'){

         if(options == '1')
         {
           d.loadDoctor(DocFile);
           d.printDoctor();
           break;
         }
         else if(options == '2')
         {
           d.updateInfo();
           d.printDoctor();
           break;
         }
         else if(options == '3')
         {
           //d.removeDoc(DocFile);
           cout << endl << "Option coming soon . . ." << endl;
           break;
         }
         else if(options == '4')
         {
           d.findDoc();
           break;
         }
          else if(options == '5')
         {
           break;
         }
    }
}
//====================================================================
else if (choice == '4'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose options 4: Patients" << endl;
cout <<"==========================" << endl;
cout << "1. Add patient. " << endl;
cout << "2. Update patient's info. " << endl;
cout << "3. Delete patient. " << endl;
cout << "4. View all patients. " << endl;
cout << "5. Search for patient. " << endl;
cout << "6. Search for patient by doctor name. " << endl;
cout << "7. Show patients appointments by time range. " << endl;
cout << "8. Go back. " << endl << endl;

       cout <<"Choose from options 1-8:  ";
       cin >> options;
       while(options != '\n'){

       if(options == '1')
         {
            pat.AddPatient(PatAddFile);
            pat.printPatient();
            break;
         }
         else if(options == '2')
         {
           pat.updatePatInfo();
           pat.printPatient();
           break;
         }
         else if(options == '3')
         {
           //pat.removePatient();
           cout << endl << "Option coming soon . . ." << endl;
           break;
         }
         else if(options == '4')
         {
           pat.loadPatient(PatFile);
           pat.printPatient();
           break;
         }
         else if(options == '5')
         {
           pat.findPatient();
           break;
         }
         else if(options == '6')
         {
           d.loadDoctor(DocFile);
           pat.loadPatient(PatFile);
           pat.findPatByDoc();
           break;
         }
         else if(options == '7')
         {
           pat.showByTimeRange();
           break;
         }
          else if(options == '8')
         {
           break;
         }
    }
}
//====================================================================
else if (choice == '5'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 5: Records" << endl;
cout <<"==========================" << endl;
cout << "1. Add new record. " << endl;
cout << "2. Update record. " << endl;
cout << "3. Show all record. " << endl;
cout << "4. Delete record. " << endl;
cout << "5. Go back. " << endl << endl;

       cout <<"Choose from options 1-5:  ";
       cin >> options;
       while(options != '\n'){

         if(options == '1')
         {
           rec.addRecord();
           break;
         }
         else if(options == '2')
         {
           rec.modifyRecord();
           break;
         }
         else if(options == '3')
         {
           rec.printRecord();
           break;
         }
         else if(options == '4')
         {
           cout << endl << "Option coming soon . . ." << endl;
           break;
         }
          else if(options == '5')
         {
           break;
         }
       }
}
//====================================================================
else if (choice == '6'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 6: Appointments" << endl;
cout <<"==========================" << endl;
cout << "1. Add new lab appointment. " << endl;
cout << "2. Delete lab appointment. " << endl;
cout << "3. Show all lab appointments. " << endl;
cout << "4. Go back. " << endl << endl;

       cout <<"Choose from options 1-4:  ";
       cin >> options;
       while(options != '\n'){

       if(options == '1')
         {
           la.addLab();
           break;
         }
         else if(options == '2')
         {
           cout << endl << "Option coming soon . . ." << endl;
           break;
         }
         else if(options == '3')
         {
           la.printLab();
           break;
         }
          else if(options == '4')
         {
           break;
         }
       }
}
//====================================================================
else if (choice == '7'){
cout << endl << "---------------------------------" << endl;
cout << endl << "You chose option 7 to QUIT program. Goodbye!" << endl;

  exit(EXIT_FAILURE);
}
}

PatFile.close();
DocFile.close();
SlotFile.close();
DateTimeFile.close();
DiagFile.close();
}
