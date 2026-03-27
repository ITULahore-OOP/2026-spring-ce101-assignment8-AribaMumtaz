#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    int workingHours;

public:
    TeachingAssistant(string n, int id, double g, double s, AccessCard c, int h);

    void displayRole() override;

    // Method Overloading for Test 6
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif