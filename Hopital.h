#ifndef HOPITAL_H
#define HOPITAL_H

#include "Patient.h"
#include "Dossier.h"
#include "Facture.h"
#include "Prescription.h"
#include "RendezVous.h"
#include <vector>

using namespace std;

class Hopital {
private:
    vector<Patient> patients;
    vector<Dossier> dossiers;
    vector<Facture> factures;
    vector<Prescription> prescriptions;
    vector<RendezVous> rendezVous;

public:
    void ajouterPatient(string nom, int id);
    void afficherPatients();
    void mettreAJourEtatSante(int idPatient, string nouvelEtat);
    void ajouterRendezVous(int idPatient, string date);
    void modifierRendezVous(int idPatient, string nouvelleDate);
    void annulerRendezVous(int idPatient);
    void consulterDossier(int idPatient);
    void ajouterNotesDossier(int idPatient, string notes);
    void genererFacture(int idPatient, double montant);
    void enregistrerPaiement(int idPatient);
    void verifierStatutPaiement(int idPatient);
    void ajouterPrescription(int idPatient, string meds);
    void afficherPrescription(int idPatient);
};

#endif // HOPITAL_H