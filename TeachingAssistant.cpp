#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string n, int id, double g, double s, AccessCard c, int h)
    : UniversityMember(n, id), Student(n, id, g), Staff(n, id, s, c), workingHours(h) {}

void TeachingAssistant::displayRole() {
    cout << "Role: Teaching Assistant" << endl;
}

void TeachingAssistant::gradeAssignment(int score) {
    cout << "numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade) {
    cout << "letter grade: " << letterGrade << endl;
}