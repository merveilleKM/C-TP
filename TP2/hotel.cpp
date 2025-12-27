#include "hotel.h"

Hotel::Hotel(std::string idhotel, std::string nom, std::string ville) : _idhotel(idhotel),
_nom(nom), _ville(ville)
{
    //Hotel::nbChambres();
}

void Hotel::addChambre(Chambre& chambre)
{
    _chambres.push_back(chambre);
}

void Hotel::removeChambre(Chambre& chambre)
{
    _chambres.pop_back();
}

int Hotel::nbChambres() const
{
    return _chambres.size();
}

std::string Hotel::showChambre()
{
    std::string tmp = "";
    if (_chambres.empty())
    {
        return "Aucun chambre";
    }
    for (auto& chb : _chambres)
    {
        tmp += chb.afficheChambre() + "\n";
    }
    return tmp + "\n";
    
}