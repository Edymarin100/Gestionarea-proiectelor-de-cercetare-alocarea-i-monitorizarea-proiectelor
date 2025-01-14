#include "Utilizator.h"

Utilizator::Utilizator(const std::string& nume, const std::string& email)
    : nume(nume), email(email) {}

std::string Utilizator::getNume() const {
    return nume;
}

std::string Utilizator::getEmail() const {
    return email;
}