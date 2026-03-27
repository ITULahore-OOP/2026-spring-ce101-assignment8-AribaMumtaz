#include "TutoringSession.h"

TutoringSession::TutoringSession(int id, double dur, TeachingAssistant* t, Student* s)
    : sessionID(id), durationMinutes(dur), ta(t), student(s) {}

double TutoringSession::getDuration() const {
     return durationMinutes;
     }

TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    return TutoringSession(
        this->sessionID, this->durationMinutes + other.durationMinutes, this->ta, this->student);
    }

bool operator>(const TutoringSession& s1, const TutoringSession& s2) {
    return s1.getDuration() > s2.getDuration();
}