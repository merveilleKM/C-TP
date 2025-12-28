#include <iostream>
#include <vector>
#include "chambre.h"
#include "client.h"

#ifndef HOTEL_H
#define HOTEL_H

class Hotel
{
private:
    std::string _idhotel;
    std::string _nom;
    std::string _ville;
    std::vector<Chambre> _chambres;
    std::vector<Client> _clients;

public:
    Hotel(std::string idhotel, std::string nom, std::string ville);
    

    int nbChambres() const;
    void addChambre(Chambre& chambre);
    void addClient(Client& client);
    void removeChambre(Chambre& chambre);
    std::string showChambre() const;
    std::string showClient() const;
    std::string searchClient (std::string nom);
    friend std::ostream& operator<<(std::ostream& os, const Hotel& ht);
};


#endif