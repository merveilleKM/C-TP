#include "chambre.h"

Chambre::Chambre(std::string type) 
{
    static int c = 1;
    _numchambre = c;
    _typechambre = type;
    _prixchambre = prixChambre(type);
    c++;
}

int Chambre::numChambre() const
{
    return _numchambre;
}
std::string Chambre::typeChambre() const
{
    return _typechambre;
}
double Chambre::prixChambre(std::string type) const
{
    if (type == "Single")
    {
        return 100;
    } else if (type == "Double")
    {
        return 125;
    } else
    {
        return 210;
    }
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

std::ostream& operator<< (std::ostream& os, const Chambre& chb)
{
    os << "La chambre numero " << chb._numchambre << " a";
    return os;
}
