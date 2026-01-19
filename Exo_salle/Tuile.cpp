#include "Tuile.h"

Tuile::Tuile(std::string& tuile, Date& datecreation, Peintre& ptre)
 :_nomtuile(tuile), _datecreation(datecreation), _ptre(ptre)
{
}

const std::string& Tuile::getNomTuile() const
{
    return _nomtuile;
}
const Date& Tuile::getDateCreation() const
{
    return _datecreation;
}
const Peintre& Tuile::getPeintre() const
{
    return _ptre;
}

void Tuile::updateNomTuile(std::string nom)
{
    _nomtuile = nom;
}

std::ostream& operator<<(std::ostream& os, const Tuile& tuile)
{
    os << "La toile " << tuile._nomtuile << " a ete peinte par " << tuile._ptre.getFullName() << " le " << tuile._datecreation.getDate();
    return os;
}
