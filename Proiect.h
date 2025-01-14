#ifndef PROIECT_H
#define PROIECT_H

#include <string>

class Proiect {
private:
    std::string nume;
    double buget;
    std::string perioada;
    std::string dataFinalizare;
    std::string resurse;

public:
    Proiect(const std::string& nume, double buget, const std::string& perioada, const std::string& dataFinalizare, const std::string& resurse);
    std::string getNume() const;
    double getBuget() const;
    std::string getPerioada() const;
    std::string getDataFinalizare() const;
    std::string getResurse() const;
};

#endif