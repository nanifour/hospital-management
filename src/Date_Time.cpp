#include "Date_Time.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Date_Time::Date_Time() //default constructor
{
    int index = 0;

    date_id[index] = 0;
    day[index] = 0;
    month[index] = 0;
    year[index] = 0;
    hours[index] = 0;
    minutes[index] =0;
    AM_PM[index] = 'a';
}

Date_Time::~Date_Time()  //deconstructor
{
    //dtor
}

Date_Time::Date_Time(const Date_Time& other)  //copy constructor
{
    //copy ctor
}

void Date_Time::loadDateTime(ifstream &InputFile)
{
   int numOfDandT = 0;

   int dateID = 0;
   int Day = 0;
   int Month = 0;
   int Year = 0;
   int Hour = 0;
   int Minu = 0;
   char amPm = 'a';

   InputFile >> numOfDandT;

    for (int i = 0; i < numOfDandT; i++){
         InputFile >> dateID;
         SetdateId(dateID,i);

         InputFile >> Day;
	      Setday(Day,i);

         InputFile >> Month;
		  Setmonth(Month,i);

		 InputFile >> Year;
		  Setyear(Year,i);

         InputFile >> Hour;
		  Sethours(Hour,i);

         InputFile >> Minu;
		  Setminutes(Minu,i);

         InputFile >> amPm;
		  SetAM_PM(amPm,i);
        }
}

void Date_Time::printDateTime()
{
    for (int i = 0; i < 10; i++){
  cout << endl << "Date ID: " << GetdateId(i) << endl;
  cout << "Day: " << Getday(i) << endl;
  cout << "Month: " << Getmonth(i) << endl;
  cout << "Year: " << Getyear(i) << endl;
  cout << "Hour: " << Gethours(i) << endl;
  cout << "Minute: " << Getminutes(i) << endl;;
  cout << "am or pm: " << GetAM_PM(i) << endl << endl;
    }
}
