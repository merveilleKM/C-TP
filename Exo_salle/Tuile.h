#include <iostream>
#include "Peintre.h"
#include "Date.h"

#ifndef TUILE_H
#define TUILE_H

class Tuile
{
private:
    int _numtuile;
    std::string _nomtuile;
    Date _datecreation;
    const Peintre& _ptre;
public:
    Tuile(std::string& tuile, Date& datecreation, Peintre& ptre);
    const std::string& getNomTuile() const;
    const Date& getDateCreation() const;
    const Peintre& getPeintre() const;

    void updateNomTuile(std::string nom);
    void updateDateCreation(Date& date);
    void updatePeintre(Peintre& ptre);

    friend std::ostream& operator<<(std::ostream& os, const Tuile& tuile);
    
};

#endif


