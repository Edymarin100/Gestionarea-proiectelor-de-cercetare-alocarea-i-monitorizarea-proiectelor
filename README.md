Gestionare Proiecte de Cercetare
Acest proiect este o aplicație simplă în C++ care gestionează alocarea și monitorizarea proiectelor de cercetare, având în vedere bugetul disponibil și prioritatea dată de data de finalizare.

Structura proiectului
Proiectul este împărțit în mai multe fișiere pentru a asigura modularitate și lizibilitate:

Main.cpp:
Punctul de intrare al aplicației. Creează utilizatori și proiecte, stabilește bugetul disponibil și afișează alocările finale.

Proiect.h / Proiect.cpp:
Definește clasa Proiect cu detalii precum numele proiectului, bugetul, perioada, data de finalizare și resursele necesare.

Utilizator.h / Utilizator.cpp:
Definește clasa Utilizator, care include informații despre numele și adresa de email a utilizatorului.

GestionareProiecte.h / GestionareProiecte.cpp:
Definește clasa GestionareProiecte, care administrează alocările proiectelor utilizatorilor în funcție de bugetul disponibil și de priorități.

Funcționalități principale
Crearea proiectelor și utilizatorilor: Proiectele includ informații despre buget, perioada de lucru, data de finalizare și resursele necesare. Utilizatorii sunt identificați prin nume și email.
Alocarea proiectelor: Proiectele sunt alocate utilizatorilor în funcție de bugetul disponibil. Proiectele sunt sortate astfel încât cele cu data de finalizare mai apropiată să fie prioritizate.
Afișarea alocărilor: Toate alocările sunt afișate, incluzând detalii despre proiect și utilizatorul asociat.
Cerințe de sistem
Un compilator C++ care suportă standardul C++11 sau mai nou.
Sistem de operare Windows, Linux sau macOS.

Instrucțiuni de compilare și rulare
Asigurați-vă că aveți un compilator C++ instalat (de exemplu, g++).
Clonați sau copiați toate fișierele sursă într-un director local.
Compilați proiectul folosind comanda:
g++ Main.cpp Proiect.cpp Utilizator.cpp GestionareProiecte.cpp -o gestionare_proiecte
Rulați aplicația folosind comanda:
./gestionare_proiecte

Exemplu de utilizare
La rularea aplicației, aceasta va afișa următoarele:

Proiectele alocate utilizatorilor, inclusiv detalii precum bugetul, perioada, data de finalizare și resursele necesare.
Proiectele care nu au putut fi alocate din cauza bugetului insuficient.

Extensii viitoare
Adăugarea unei interfețe grafice pentru gestionarea proiectelor.
Persistența datelor utilizând fișiere sau baze de date.
Optimizarea algoritmului de alocare pentru a include alte criterii de prioritizare.
