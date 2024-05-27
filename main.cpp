#include "hopital.h"
#include <iostream>

using namespace std;

void Hopital::ajouterPatient(string nom, int id) {
    patients.emplace_back(nom, id);
    dossiers.emplace_back(id);
}

void Hopital::afficherPatients() {
    cout << "Liste des patients :" << endl;
    for (auto& patient : patients) {
        patient.afficherInfo();
    }
}

void Hopital::mettreAJourEtatSante(int idPatient, string nouvelEtat) {
    for (auto& patient : patients) {
        if (patient.getId() == idPatient) {
            patient.mettreAJourEtatSante(nouvelEtat);
            cout << "L'état de santé du patient avec l'ID " << idPatient << " a été mis à jour." << endl;
            return;
        }
    }
    cout << "Patient avec l'ID " << idPatient << " non trouvé." << endl;
}

void Hopital::ajouterRendezVous(int idPatient, string date) {
    rendezVous.emplace_back(idPatient, date);
    cout << "Rendez-vous ajouté pour le patient ID " << idPatient << " à la date : " << date << endl;
}

void Hopital::modifierRendezVous(int idPatient, string nouvelleDate) {
    for (auto& rdv : rendezVous) {
        if (rdv.getPatientId() == idPatient) {
            rdv.modifierRendezVous(nouvelleDate);
            return;
        }
    }
    cout << "Rendez-vous pour le patient avec l'ID " << idPatient << " non trouvé." << endl;
}

void Hopital::annulerRendezVous(int idPatient) {
    for (auto it = rendezVous.begin(); it != rendezVous.end(); ++it) {
        if (it->getPatientId() == idPatient) {
            rendezVous.erase(it);
            cout << "Rendez-vous annulé pour le patient ID " << idPatient << endl;
            return;
        }
    }
    cout << "Rendez-vous pour le patient avec l'ID " << idPatient << " non trouvé." << endl;
}

void Hopital::consulterDossier(int idPatient) {
    for (const auto& dossier : dossiers) {
        if (dossier.getPatientId() == idPatient) {
            dossier.consulterNotes();
            return;
        }
    }
    cout << "Dossier pour le patient avec l'ID " << idPatient << " non trouvé." << endl;
}

void Hopital::ajouterNotesDossier(int idPatient, string notes) {
    for (auto& dossier : dossiers) {
        if (dossier.getPatientId() == idPatient) {
            dossier.ajouterNotes(notes);
            cout << "Notes ajoutées au dossier du patient ID " << idPatient << endl;
            return;
        }
    }
    cout << "Dossier pour le patient avec l'ID " << idPatient << " non trouvé." << endl;
}

void Hopital::genererFacture(int idPatient, double montant) {
    factures.emplace_back(idPatient, montant);
    factures.back().genererFacture();
}

void Hopital::enregistrerPaiement(int idPatient) {
    for (auto& facture : factures) {
        if (facture.getPatientId() == idPatient) {
            facture.enregistrerPaiement();
            return;
        }
    }
    cout << "Facture pour le patient avec l'ID " << idPatient << " non trouvée." << endl;
}

void Hopital::verifierStatutPaiement(int idPatient) {
    for (const auto& facture : factures) {
        if (facture.getPatientId() == idPatient) {
            facture.verifierStatutPaiement();
            return;
        }
    }
    cout << "Facture pour le patient avec l'ID " << idPatient << " non trouvée." << endl;
}

void Hopital::ajouterPrescription(int idPatient, string meds) {
    prescriptions.emplace_back(idPatient, meds);
    cout << "Prescription ajoutée pour le patient ID " << idPatient << endl;
}

void Hopital::afficherPrescription(int idPatient) {
    for (const auto& prescription : prescriptions) {
        if (prescription.getPatientId() == idPatient) {
            prescription.afficherPrescription();
            return;
        }
    }
    cout << "Prescription pour le patient avec l'ID " << idPatient << " non trouvée." << endl;
}