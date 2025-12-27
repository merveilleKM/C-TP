#include <iostream>
#include "date.h"

Date::Date(){
    _jour = 1;
    _mois = 1;
    _annee = 2025;
}

Date::Date(int jour, int mois, int annee) : _jour(jour), _mois(mois), _annee(annee)
{
    if (!isDate(jour, mois, annee))
    {
        throw std::invalid_argument("Argument invalide : " 
            + std::to_string(jour) + " / " + std::to_string(mois) + " / " + std::to_string(annee));
    }
}

bool Date::isDate(int jour, int mois, int annee) 
{
    if ((jour < 1) || (jour>31) || (annee<2025)) return false;
    if ((mois <1) || (mois>12)) return false;
    if ((mois == 2) && (jour > 28)) return false;
    if (((mois == 4) || (mois == 6) ||(mois == 9)
    || (mois == 11)) && (jour > 30)) return false;
    return true;
}

int Date::getJour() const
{
    return _jour;
}
int Date::getMois() const
{
    return _mois;
}
int Date::getAnnee() const
{
    return _annee;
}

void Date::setJour(int jour)
{
    _jour = jour;
}
void Date::setMois(int mois)
{
    _mois = mois;
}
void Date::setAnnee(int annee)
{
    _annee = annee;
}