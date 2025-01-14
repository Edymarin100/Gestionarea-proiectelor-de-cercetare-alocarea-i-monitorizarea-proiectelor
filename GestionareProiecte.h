#ifndef GESTIONARE_PROIECTE_H
#define GESTIONARE_PROIECTE_H

#include <vector>
#include "Proiect.h"
#include "Utilizator.h"
#include <algorithm>

class GestionareProiecte {
private:
    struct Alocare {
        Proiect proiect;
        Utilizator utilizator;
    };

    std::vector<Alocare> alocari;
    double bugetDisponibil;

public:
    GestionareProiecte();
    void setBugetDisponibil(double buget);
    void adaugaProiect(const Proiect& proiect, const Utilizator& utilizator);
    void afiseazaProiecte() const;
};

#endif