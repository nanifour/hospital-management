#include "Diagnoses.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

Diagnoses::Diagnoses()  //default constructor
{
    int index = 0;
    diagnosis_id[index] = 0;
    disease_name[index] = "";
}

Diagnoses::~Diagnoses() //deconstructor
{
    //dtor
}

Diagnoses::Diagnoses(const Diagnoses& other)  //copy constructor
{
    //copy ctor
}
void Diagnoses::loadDiag(std::ifstream &InputFile)
{
    int numOfDiag = 0;

   string dis_name = "";
   string emptyLine = "";

   InputFile >> numOfDiag;

    for (int i = 0; i < numOfDiag; i++){
         getline(InputFile,emptyLine); //get the empty line before the string
         getline(InputFile,dis_name);
          Setdisease_name(dis_name,i);
        }
}
void Diagnoses::printDiag(std::ifstream &InputFile)
{
     for (int i = 0; i < 18; i++){
  cout << endl << "Diagnosis: " << Getdisease_name(i) << endl;

    }
}
