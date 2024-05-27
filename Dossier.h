#ifndef DOSSIER_H
#define DOSSIER_H

#include <string>
#include <iostream>

using namespace std;

class Dossier {
private:
    int patientId;
    string notes;

public:
    Dossier(int id);
    void ajouterNotes(string nouvelleNote);
    void consulterNotes() const;
    int getPatientId() const;
};

#endif // DOSSIER_H