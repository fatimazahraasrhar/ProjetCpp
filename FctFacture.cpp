#include "Facture.h"
#include <iostream>

Facture::Facture(int id, double montant) : patientId(id), montant(montant), payee(false) {}

void Facture::genererFacture() const {
    cout << "Facture pour le patient ID " << patientId << " : " << montant << "€" << (payee ? " (payée)" : " (non payée)") << endl;
}

void Facture::enregistrerPaiement() {
    payee = true;
    cout << "Paiement enregistré pour le patient ID " << patientId << endl;
}

void Facture::verifierStatutPaiement() const {
    cout << "Statut de paiement pour le patient ID " << patientId << " : " << (payee ? "Payée" : "Non payée") << endl;
}

int Facture::getPatientId() const {
    return patientId;
}