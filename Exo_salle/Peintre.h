#include <iostream>
#include <vector>

#ifndef PEINTRE_H
#define PEINTRE_H

class Peintre
{
private:
    int _idpeintre;
    std::string _nom;
    std::string _prenom;
    std::string _adresse;

public:
    Peintre(std::string nom, std::string prenom, std::string adresse);

    const std::string getNom() const;
    const std::string getPrenom() const;
    const std::string getAdresse() const;
    const std::string getFullName() const;

    void updateNom(std::string nom);
    void updatePrenom(std::string prenom);
    void updateAdresse(std::string adresse);

    friend std::ostream& operator<<(std::ostream& os, const Peintre& ptre);
};

#endif

