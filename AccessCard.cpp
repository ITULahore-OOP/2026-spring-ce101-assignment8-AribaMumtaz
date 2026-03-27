#include "AccessCard.h"

// Initialize the card with an ID and security level
AccessCard::AccessCard(string id, int level) : cardID(id), accessLevel(level) {}

// Returns the card ID string
string AccessCard::getCardID() const {
    return cardID;
}

// Returns the integer access level
int AccessCard::getAccessLevel() const {
    return accessLevel;
}

// Standardized output for the card's information
void AccessCard::displayCardInfo() const {
    cout << "Card ID: " << cardID << " | Access Level: " << accessLevel << endl;
}