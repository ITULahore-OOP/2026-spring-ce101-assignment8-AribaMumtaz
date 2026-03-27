#include "Department.h"

Department::Department(string name) {
     departmentName =name; 
    }

void Department::addMember(UniversityMember* member) {
    members.push_back(member);
}

void Department::displayAllRoles() {
    for (auto m : members) {
        m->displayRole(); //  polymorphism
    }
}