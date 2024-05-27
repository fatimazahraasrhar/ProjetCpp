#include "Dossier.h"

Dossier::Dossier(int id) : patientId(id) {}

void Dossier::ajouterNotes(string nouvelleNote) {
    notes += nouvelleNote + "\n";
}

void Dossier::consulterNotes() const {
    cout << "Notes du dossier du patient ID " << patientId << " : " << notes << endl;
}

int Dossier::getPatientId() const {
    return patientId;
}