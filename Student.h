//Student.h


#include <string>
#include <vector>
#include "degree.h"
using namespace std;


class Student{
public:

	void SetStudentID(string studentID);
	string GetStudentID();

	void SetFirstName(string firstName);
	string GetFirstName();

	void SetLastName(string lastName);
	string GetLastName();

	void SetEmail(string email);
	string Getemail();

	void SetAgeYears(int ageYears);
	int GetAgeYears();

	void SetDaysPerClass(int daysClass1,int daysClass2, int daysClass3);
	int GetDaysPerClass[3];

	//void SetDegree(DegreeProgram degreeProg);
	//DegreeProgram GetDegreeProgram();

	void print();

	Student();
	Student(string studentID, string firstName, string lastName, string email, int ageYears, int daysClass1,int daysClass2, int daysClass3, DegreeProgram degreeProg);
	

private:
	string studentID, firstName, lastName, email;
	int ageYears;
	int daysClass[3];
	// DegreeProgram degreeProg;

}