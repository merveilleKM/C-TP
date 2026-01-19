#include <string>
#include "Date.h"

Date::Date(/* args */)
{
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

const int Date::getJour() const
{
    return _jour;
}
const int Date::getMois() const
{
    return _mois;
}
const int Date::getAnnee() const
{
    return _annee;
}

const std::string Date::getDate() const
{
    return "jour " + std::to_string(_jour) + " mois " + std::to_string(_mois) + " annee " + std::to_string(_annee);
}

void Date::updateDate(int jour, int mois, int annee)
{
    if (isDate(jour, mois, annee))
    {
        _jour = jour;
        _mois = mois;
        _annee = annee;
    }
    else
    {
        throw std::invalid_argument("Argument invalide : " 
            + std::to_string(jour) + " / " + std::to_string(mois) + " / " + std::to_string(annee));
    }
}

