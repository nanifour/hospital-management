# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o Patient.o Doctor.o Slot.o Date_Time.o Record.o Diagnoses.o Appointment.o Lab.o
	$(CC) $(CFLAGS) -o main main.o Patient.o Doctor.o Slot.o Date_Time.o Record.o Diagnoses.o Appointment.o Lab.o
 
# The main.o target can be written more simply
 
main.o: main.cpp Patient.h Doctor.h Slot.h Date_Time.h Record.h Diagnoses.h Appointment.h Lab.h
	$(CC) $(CFLAGS) -c main.cpp
 
Patient.o: Patient.cpp Patient.h 
Doctor.o: Doctor.cpp Doctor.h 
Slot.o: Slot.cpp Slot.h
Date_Time.o: Date_Time.cpp Date_Time.h 
Record.o: Record.cpp Record.h
Diagnoses.o: Diagnoses.cpp Diagnoses.h
Appointment.o: Appointment.cpp Appointment.h
Lab.o: Lab.cpp Lab.h
