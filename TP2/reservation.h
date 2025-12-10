#include <iostream>
#include <vector>
#include "hotel.h" 
#include "client.h"
#include "date.h"

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation
{
private:
    Date _datedebut;
    int _nbnuit;
    Hotel _idhotel;
    Chambre _idchambre;
    Client _idclient;
    double _montant;
public:
    Reservation(/* args */);
};

#endif