#include "Prescription.h"

Prescription::Prescription(int id, string meds) : patientId(id), medicaments(meds) {}

void Prescription::afficherPrescription() const {
    cout << "Prescription pour le patient ID " << patientId << " : " << medicaments << endl;
}

int Prescription::getPatientId() const {
    return patientId;
}