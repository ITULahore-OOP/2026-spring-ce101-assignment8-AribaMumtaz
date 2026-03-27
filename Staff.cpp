#include "Staff.h"

// Constructor initializes both the base class and the member object
Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), salary(salary), card(card) {}

double Staff::getSalary() const { 
    return salary; 
}

void Staff::displayRole() {
    cout << "[Role: Staff Member] Name: " << getName() 
         << " | ID: " << getMemberID() 
         << " | Salary: $" << salary << endl;
}

void Staff::displayCard() const {
    cout << "Access Card Details for " << getName() << ":" << endl;
    card.displayCardInfo(); // Delegation to the AccessCard object
}