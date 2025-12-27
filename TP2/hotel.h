#include <iostream>
#include <vector>
#include "chambre.h"

#ifndef HOTEL_H
#define HOTEL_H

class Hotel
{
private:
    std::string _idhotel;
    std::string _nom;
    std::string _ville;
    std::vector<Chambre> _chambres;

public:
    Hotel(std::string idhotel, std::string nom, std::string ville);
    

    int nbChambres() const;
    void addChambre(Chambre& chambre);
    void removeChambre(Chambre& chambre);
    std::string showChambre();
};


#endif