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
    Chambre(int numchambre, std::string type, double prix);
    bool isAvaible();
    int numChambre() const;
    std::string typeChambre() const;
    double prixChambre() const;
    std::string afficheChambre() const;

    void updateNumChambre(int numchambre);
    void updateTypeChambre(std::string typechambre);
    void updatePrixChambre(double prix);
};

#endif