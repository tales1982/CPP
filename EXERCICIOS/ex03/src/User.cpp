#include "../include/User.hpp"

// Remove the default constructor since it can't properly initialize const members
// User::User() {};  // This should be removed or modified

User::User(const std::string &username, int accessLevel) : 
    _username(username), 
    _accessLevel(accessLevel), 
    _isLoggedIn(false)
{
    if (_accessLevel < 1 || _accessLevel > 5)
        throw InvalidAccessLevelException();
}

User::User(const User &other) : 
    _username(other._username), 
    _accessLevel(other._accessLevel), 
    _isLoggedIn(other._isLoggedIn) {}

// Fixed operator= syntax
User& User::operator=(const User &other)
{
    if(this != &other)
        this->_isLoggedIn = other._isLoggedIn;
    return *this;
}

User::~User() {}

void User::login() { _isLoggedIn = true; }
void User::logout() { _isLoggedIn = false; }

std::string User::getUsername() const {
    return _username;
}

int User::getAccessLevel() const {
    return _accessLevel;
}

bool User::getIsLoggedIn() const {
    return _isLoggedIn;
}

const char* User::InvalidAccessLevelException::what() const throw() {
    return "Invalid access level (must be 1-5)";
}