#include "Student.h"

Student::Student(string n, int id, double g) : UniversityMember(n, id), cgpa(g) {}

double Student::getCGPA() const { 
    
    return cgpa;
 }

void Student::updateCGPA(double newCGPA) { 
    cgpa = newCGPA; 
}

void Student::displayRole() {
    cout << "Role: Student" << endl;
}