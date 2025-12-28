#include <iostream>
#include <vector>
#include "typeChambre.h"

#ifndef CHAMBRE_H
#define CHAMBRE_H

class Chambre
{
private:

    int _numchambre;
    std::string _typechambre;
    //TypeChambre _typechambre;
    double _prixchambre;
public:
    Chambre(std::string type);
    bool isAvaible();
    int numChambre() const;
    std::string typeChambre() const;
    double prixChambre(std::string type) const;
    std::string afficheChambre() const;

    void updateNumChambre(int numchambre);
    void updateTypeChambre(std::string typechambre);
    void updatePrixChambre(double prix);

    friend std::ostream& operator<<(std::ostream& os, const Chambre& chb);
};


#endif