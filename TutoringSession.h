#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta; // Association
    Student* student;      // Association

public:
    TutoringSession(int id, double dur, TeachingAssistant* t, Student* s);
    double getDuration() const;
    
    // Member + Operator
    TutoringSession operator+(const TutoringSession& other);
};

// Non-member 
bool operator>(const TutoringSession& s1, const TutoringSession& s2);

#endif