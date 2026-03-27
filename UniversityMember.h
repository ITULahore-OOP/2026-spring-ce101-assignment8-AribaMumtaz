#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <string>
#include <iostream>

using namespace std;

class UniversityMember {
protected:
    string name;
    int memberID;
public:
    UniversityMember(string n, int id);

    // Virtual destructor for polymorphic 
    virtual ~UniversityMember();
    // attributes
    string getName() const;
    int getMemberID() const;
    virtual void displayRole() = 0; 
};

#endif