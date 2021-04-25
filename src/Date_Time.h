#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <string>
#include <iostream>

class Date_Time
{
    //private data
        int date_id[10];
        int day[10];
        int month[10];
        int year[10];
        int hours[10];
        int minutes[10];
        char AM_PM[10];

    public:
        Date_Time();                         //default constructor
        ~Date_Time();                       //deconstructor
        Date_Time(const Date_Time& other);  //copy constructor
        void loadDateTime(std::ifstream &InputFile);
        void printDateTime();

      //Getters and Setters
        int GetdateId(int index) { return date_id[index]; }
        int Getday(int index) { return day[index]; }
        int Getmonth(int index) { return month[index]; }
        int Getyear(int index) { return year[index]; }
        int Gethours(int index) { return hours[index]; }
        int Getminutes(int index) { return minutes[index]; }
        char GetAM_PM(int index) { return AM_PM[index]; }


        void SetdateId(int d_id,int index) { date_id[index] = d_id; }
        void Setday(int val,int index) { day[index] = val; }
        void Setmonth(int mon,int index) { month[index] = mon; }
        void Setyear(int y,int index) { year[index] = y; }
        void Sethours(int h,int index) { hours[index] = h; }
        void Setminutes(int m,int index) { minutes[index] = m; }
        void SetAM_PM(char AmPm,int index) { AM_PM[index] = AmPm; }


};

#endif // DATE_TIME_H
