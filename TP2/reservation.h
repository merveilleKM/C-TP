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
    Reservation(Date datedebut, int nbnuit, Hotel idhotel, Chambre idchambre, Client idclient, double montant);

    double montantTotal() const;
    int getNbNuit() const;
    Date getDateDebut() const;
    Hotel getIdHotel() const;
    Chambre getIdChambre() const;
    Client getIdClient() const;
    double getMontant() const;

    void updateNbNuit(int nbnuit);
    void updateDateDebut(Date datedebut);
};

#endif