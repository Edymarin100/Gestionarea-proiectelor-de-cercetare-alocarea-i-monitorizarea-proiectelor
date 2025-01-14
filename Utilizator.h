#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <string>

class Utilizator {
private:
    std::string nume;
    std::string email;

public:
    Utilizator(const std::string& nume, const std::string& email);
    std::string getNume() const;
    std::string getEmail() const;
};

#endif