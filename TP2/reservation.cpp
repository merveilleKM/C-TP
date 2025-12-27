#include "reservation.h"

Reservation::Reservation(Date datedebut, int nbnuit, Hotel idhotel, Chambre idchambre, Client idclient, double montant) : _datedebut(datedebut),
_nbnuit(nbnuit), _idhotel(idhotel), _idchambre(idchambre), _idclient(idclient), _montant(montant)
{
    
} 

double Reservation::montantTotal() const
{
    return _montant * _nbnuit;
}

int Reservation::getNbNuit() const
{
    return _nbnuit;
}
Date Reservation::getDateDebut() const
{
    return _datedebut;
}
Hotel Reservation::getIdHotel() const
{
    return _idhotel;
}
Chambre Reservation::getIdChambre() const
{
    return _idchambre;
}
Client Reservation::getIdClient() const
{
    return _idclient;
}
double Reservation::getMontant() const
{
    return _montant;
}

void Reservation::updateNbNuit(int nbnuit)
{
    _nbnuit = nbnuit;
}
void Reservation::updateDateDebut(Date datedebut)
{
    _datedebut = datedebut;
}