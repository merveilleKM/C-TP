#include <iostream>
#include <vector>
#include "chambre.h"

#ifndef HOTEL_H
#define HOTEL_H

class Hotel
{
private:
    std::string _idHotel;
    std::string _nom;
    std::string _ville;
    std::vector<Chambre> _nbChambre;

public:
    Hotel();
};

#endif