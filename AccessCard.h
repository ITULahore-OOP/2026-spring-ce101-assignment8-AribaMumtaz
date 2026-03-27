#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <string>
#include <iostream>

using namespace std;

class AccessCard {
private:
    string cardID;
    int accessLevel;

public:
    // Constructor required for Test 1
    AccessCard(string id, int level);

    // Getters required for REQUIRE(card.getCardID() == "AC-123")
    string getCardID() const;
    int getAccessLevel() const;

    // Method to display card details
    void displayCardInfo() const;
};

#endif