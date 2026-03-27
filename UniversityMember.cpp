#include "UniversityMember.h"

// Corrected constructor logic
UniversityMember::UniversityMember(string n, int id) {
    name = n;
    memberID = id;
}

UniversityMember::~UniversityMember() {
  
}

string UniversityMember::getName() const {
    return name;
}
int UniversityMember::getMemberID() const {
    return memberID;
}