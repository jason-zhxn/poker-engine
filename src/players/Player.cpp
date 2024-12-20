#include "Player.h"

// Constructor
Player::Player(const std::string &name, int initialChips) : name(name), chips(initialChips), active(true) {}

// Getters
std::string Player::getName() const
{
    return name;
}

int Player::getChips() const
{
    return chips;
}

bool Player::isActive() const
{
    return active;
}

std::vector<Card> Player::getHand() const
{
    return hand;
}

int Player::getCurrentBet() const
{
    return currentBet;
}

// Modifiers
void Player::addChips(int amount)
{
    chips += amount;
}

void Player::deductChips(int amount)
{
    chips -= amount;
}

void Player::fold()
{
    active = false;
}

void Player::reset()
{
    active = true;
    hand.clear();
}

void Player::setHand(const std::vector<Card> &newHand)
{
    hand = newHand;
}

void Player::setCurrentBet(const int &amount)
{
    currentBet = amount;
}
