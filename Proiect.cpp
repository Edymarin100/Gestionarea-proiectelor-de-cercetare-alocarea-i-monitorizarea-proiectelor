#include "Proiect.h"

Proiect::Proiect(const std::string& nume, double buget, const std::string& perioada, const std::string& dataFinalizare, const std::string& resurse)
    : nume(nume), buget(buget), perioada(perioada), dataFinalizare(dataFinalizare), resurse(resurse) {}

std::string Proiect::getNume() const {
    return nume;
}

double Proiect::getBuget() const {
    return buget;
}

std::string Proiect::getPerioada() const {
    return perioada;
}

std::string Proiect::getDataFinalizare() const {
    return dataFinalizare;
}

std::string Proiect::getResurse() const {
    return resurse;
}