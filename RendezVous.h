#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H

#include <string>
#include <iostream>

using namespace std;

class RendezVous {
private:
    int patientId;
    string date;

public:
    RendezVous(int id, string date);
    void afficherRendezVous() const;
    void modifierRendezVous(string nouvelleDate);
    int getPatientId() const;
};

#endif // RENDEZVOUS_H