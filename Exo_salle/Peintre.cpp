#include "Peintre.h"

Peintre::Peintre(std::string nom, std::string prenom, std::string adresse) : _nom(nom), _prenom(prenom), _adresse(adresse)
{
    static int c=1;
    _idpeintre = c++;
}
const std::string Peintre::getNom() const
{
    return _nom;
}
const std::string Peintre::getPrenom() const
{
    return _prenom;
}
const std::string Peintre::getAdresse() const{
    return _adresse;
}
const std::string Peintre::getFullName() const
{
    return _nom + _prenom;
}

void Peintre::updateNom(std::string nom)
{
    _nom = nom;
}
void Peintre::updatePrenom(std::string prenom)
{
    _prenom = prenom;
}
void Peintre::updateAdresse(std::string adresse)
{
    _adresse = adresse;
}

std::ostream& operator<<(std::ostream& os, const Peintre& ptre)
{
    os << "Le peintre " << ptre.getFullName() << " habite a " << ptre.getAdresse();
    return os;
}