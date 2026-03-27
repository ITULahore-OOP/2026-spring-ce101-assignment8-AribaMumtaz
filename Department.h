#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"
#include <vector>

class Department {
private:
    string departmentName;
    vector<UniversityMember*> members; // Aggregation

public:
    Department(string name);
    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif