#include "Patient.h"

Patient::Patient(string nom, int id) : nom(nom), id(id), etatSante("Stable") {}

void Patient::afficherInfo() const {
    cout << "Nom du patient : " << nom << ", ID : " << id << ", État de santé : " << etatSante << endl;
}

void Patient::mettreAJourEtatSante(string nouvelEtat) {
    etatSante = nouvelEtat;
}

int Patient::getId() const {
    return id;
}

string Patient::getNom() const {
    return nom;
}