// student.cpp
#include <string>
#include "Degree.h"
#include "Student.h"
using namespace std;
// DEBUG

Student::Student() {
	this->studentID = "FIX ME";
	this->firstName = "FIX ME";
	this->lastName = "FIX ME";
	this->email = "FIX ME";
	this->ageYears = 50;
	this->daysClass = 0;
	//this->degreeProg = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string email, int ageYears, int daysClass1, int daysClass2, int daysClass3) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->ageYears = ageYears;
	this->daysClass = 0;
	//this->degreeProg = DegreeProgram::NETWORK;
}

void Student::print() {
	string degreeProgram;
	if (degreeProg == DegreeProgram::SECURITY){
		degreeProgram = "SECURITY";
	}
	else if (degreeProg == DegreeProgram::NETWORK) {
		degreeProgram = "NETWORK";
	}
	else if (degreeProg == DegreeProgram::SOFTWARE) {
		degreeProgram = "SOFTWARE";
	}
}