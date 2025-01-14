#include "GestionareProiecte.h"
#include <iostream>

GestionareProiecte::GestionareProiecte() : bugetDisponibil(0) {}

void GestionareProiecte::setBugetDisponibil(double buget) {
    bugetDisponibil = buget;
}

void GestionareProiecte::adaugaProiect(const Proiect& proiect, const Utilizator& utilizator) {
    if (proiect.getBuget() <= bugetDisponibil) {
        alocari.push_back({ proiect, utilizator });
        bugetDisponibil -= proiect.getBuget();
    } else {
        std::cout << "Nu se poate aloca proiectul \"" << proiect.getNume() << "\" din cauza bugetului insuficient.\n";
    }

    // Sortare proiecte in functie de data finalizarii
    std::sort(alocari.begin(), alocari.end(), [](const Alocare& a, const Alocare& b) {
        return a.proiect.getDataFinalizare() < b.proiect.getDataFinalizare();
    });
}

void GestionareProiecte::afiseazaProiecte() const {
    for (const auto& alocare : alocari) {
        std::cout << "Proiect: " << alocare.proiect.getNume() << "\n"
                  << "Buget: " << alocare.proiect.getBuget() << "\n"
                  << "Perioada: " << alocare.proiect.getPerioada() << "\n"
                  << "Data finalizare: " << alocare.proiect.getDataFinalizare() << "\n"
                  << "Resurse: " << alocare.proiect.getResurse() << "\n"
                  << "Alocat utilizatorului: " << alocare.utilizator.getNume() << " (" << alocare.utilizator.getEmail() << ")\n\n";
    }
}
