#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include <string>
#include <iostream>

using namespace std;

class Prescription {
private:
    int patientId;
    string medicaments;

public:
    Prescription(int id, string meds);
    void afficherPrescription() const;
    int getPatientId() const;
};

#endif // PRESCRIPTION_H