#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

class Student : virtual public UniversityMember {
protected:
    double cgpa;

public:
    Student(string n, int id, double g);
    double getCGPA() const;
    void updateCGPA(double newCGPA);
    
    // Overriding 
    void displayRole() override;
};

#endif