#include <iostream>
#include "Proiect.h"
#include "Utilizator.h"
#include "GestionareProiecte.h"

int main() {
    GestionareProiecte gestionare;

    // Setare buget disponibil
    double bugetDisponibil = 50000;
    gestionare.setBugetDisponibil(bugetDisponibil);

    // Creare utilizatori si proiecte
    Utilizator utilizator1("Ion Popescu", "ion.popescu@example.com");
    Proiect proiect1("Proiect AI", 10000, "12 luni", "2025-12-31", "Servere, licente software");

    Utilizator utilizator2("Maria Ionescu", "maria.ionescu@example.com");
    Proiect proiect2("Proiect Biochimie", 15000, "18 luni", "2025-06-30", "Laboratoare, echipamente specializate");

    Utilizator utilizator3("George Vasilescu", "george.vasilescu@example.com");
    Proiect proiect3("Proiect Fizica", 8000, "6 luni", "2025-04-01", "Instrumente de laborator");

    Utilizator utilizator4("Andreea Marin", "andreea.marin@example.com");
    Proiect proiect4("Proiect Chimie", 12000, "9 luni", "2025-08-15", "Reactivi chimici, echipamente");

    Utilizator utilizator5("Dan Pavel", "dan.pavel@example.com");
    Proiect proiect5("Proiect Robotica", 20000, "24 luni", "2026-12-31", "Kituri robotice, simulatoare");

    // Alocare proiecte utilizatorilor
    gestionare.adaugaProiect(proiect1, utilizator1);
    gestionare.adaugaProiect(proiect2, utilizator2);
    gestionare.adaugaProiect(proiect3, utilizator3);
    gestionare.adaugaProiect(proiect4, utilizator4);
    gestionare.adaugaProiect(proiect5, utilizator5);

    // Afisare proiecte alocate in functie de prioritati
    gestionare.afiseazaProiecte();

    return 0;
}