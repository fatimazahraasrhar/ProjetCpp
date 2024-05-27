#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>

using namespace std;

class Patient {
private:
    string nom;
    int id;
    string etatSante;

public:
    Patient(string nom, int id);
    void afficherInfo() const;
    void mettreAJourEtatSante(string nouvelEtat);
    int getId() const;
    string getNom() const;
};

#endif // PATIENT_H