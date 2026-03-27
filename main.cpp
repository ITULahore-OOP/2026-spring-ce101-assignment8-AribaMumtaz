#include "Department.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"

int main() {
    AccessCard card("AC-101", 5);
    TeachingAssistant ta("John Doe", 5001, 3.8, 2000, card, 10);
    Student s("Jane Smith", 6001, 3.9);

    Department cs("Computer Science");
    cs.addMember(&ta);
    cs.addMember(&s);

    cout << "Displaying All Roles:" << endl;
    cs.displayAllRoles();

    TutoringSession sess1(1, 60.0, &ta, &s);
    sess1.operator+(sess1); // Testing 

    return 0;
}