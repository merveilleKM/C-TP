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
    for (const auto& cl : _clients)
    {
        if (client.operator==(cl))
        {
            
        }
    }
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
    bool tmp = false;
    for (const auto& cl : _clients)
    {
        if (cl.nom() == nom)
        {
            tmp = true;
        }
    }
    if (tmp)
    {
        for (const auto& cl : _clients)
        {
            if (cl.nom() == nom)
            {
             return cl.afficherClient();
            }
        }
    } else
    {
        Client clt("cl_default", nom, "prenom_defaut");
        _clients.push_back(clt);
        return "Utilisateur ajoute avec succes \n";
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

bool Hotel::operator == (const Client& client) const
{
    for (const auto& clt : _clients)
    {
        return client.operator==(clt);
    }
}


std::ostream& operator<<(std::ostream& os, const Hotel& ht)
{
    os << "L'hotel a pour nom " << ht._nom << " situe dans la ville de " << ht._ville << " compte " << ht.nbChambres() << " chambres qui sont : " << ht.showChambre();
    return os;
}