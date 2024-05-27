#include "RendezVous.h"

RendezVous::RendezVous(int id, string date) : patientId(id), date(date) {}

void RendezVous::afficherRendezVous() const {
    cout << "Rendez-vous pour le patient ID " << patientId << " à la date : " << date << endl;
}

void RendezVous::modifierRendezVous(string nouvelleDate) {
    date = nouvelleDate;
    cout << "Rendez-vous modifié pour le patient ID " << patientId << " à la nouvelle date : " << date << endl;
}

int RendezVous::getPatientId() const {
    return patientId;
}