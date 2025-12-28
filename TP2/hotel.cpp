#include "hotel.h"

Hotel::Hotel(std::string idhotel, std::string nom, std::string ville) : _idhotel(idhotel),
_nom(nom), _ville(ville)
{
    //Hotel::nbChambres();
}

void Hotel::addChambre(Chambre& chambre)
{
    _chambres.push_back(chambre);
}

void Hotel::addClient(Client& client)
{
    _clients.push_back(client);
}

void Hotel::removeChambre(Chambre& chambre)
{
    _chambres.pop_back();
}

int Hotel::nbChambres() const
{
    return _chambres.size();
}

std::string Hotel::showChambre() const
{
    std::string tmp = "";
    if (_chambres.empty())
    {
        return "Aucun chambre";
    }
    for (auto& chb : _chambres)
    {
        tmp += chb.afficheChambre() + "\n";
    }
    return tmp + "\n";
    
}

std::string Hotel::searchClient (std::string nom)
{
    for (const auto& cl : _clients)
    {
        if (cl.nom() == nom)
        {
            return cl.afficherClient();
        }
    }
    return "Aucun client ayant ce nom existe";
    
}

std::string Hotel::showClient() const 
{
    std::string tmp = "";
    if (_clients.empty())
    {
        return "Aucun client enregistre";
    }
    for (const auto& cl : _clients)
    {
        tmp += cl.afficherClient() + "\n";
    }
    return tmp;
}

std::ostream& operator<<(std::ostream& os, const Hotel& ht)
{
    os << "L'hotel a pour nom " << ht._nom << " situe dans la ville de " << ht._ville << " compte " << ht.nbChambres() << " chambres qui sont : " << ht.showChambre();
    return os;
}