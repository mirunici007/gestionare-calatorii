#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <iostream>
#include <stdexcept>

class InvalidLogin : public std::runtime_error{
    public:
    explicit InvalidLogin(const std::string &message)
        : std::runtime_error(message) {}
};

class InvalidData : public std::runtime_error{
    public:
    explicit InvalidData(const std::string &message): std::runtime_error(message) {}
};

class WeakPassword : public std::runtime_error{
    public:
    explicit WeakPassword(const std::string &message): std::runtime_error(message) {}
};

class NotFound : public std::runtime_error{
    public:
    explicit NotFound(const std::string &message): std::runtime_error(message) {}
};


class InvalidReservation : public std::runtime_error{
    public:
    explicit InvalidReservation(const std::string &message): std::runtime_error(message) {}
};


#endif