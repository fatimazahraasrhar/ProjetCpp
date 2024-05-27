#ifndef FACTURE_H
#define FACTURE_H

using namespace std;

class Facture {
private:
    int patientId;
    double montant;
    bool payee;

public:
    Facture(int id, double montant);
    void genererFacture() const;
    void enregistrerPaiement();
    void verifierStatutPaiement() const;
    int getPatientId() const;
};

#endif // FACTURE_H