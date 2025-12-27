#include "chambre.h"

Chambre::Chambre(int numchambre, std::string type, double prix) : _numchambre(numchambre),
_typechambre(type), _prixchambre(prix)
{

}

int Chambre::numChambre() const
{
    return _numchambre;
}
std::string Chambre::typeChambre() const
{
    return _typechambre;
}
double Chambre::prixChambre() const
{
    return _prixchambre;
}

std::string Chambre::afficheChambre() const
{
    std::string ch = "La chambre numero " + std::to_string(_numchambre) + " type " + _typechambre + " coutant " + std::to_string(_prixchambre);
    return ch;
}

void Chambre::updateNumChambre(int numchambre)
{
    _numchambre = numchambre;
}
void Chambre::updateTypeChambre(std::string typechambre)
{
    _typechambre = typechambre;
}
void Chambre::updatePrixChambre(double prix)
{
    _prixchambre = prix;
}