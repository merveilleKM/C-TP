#include "client.h"

Client::Client()
{
    _idclient = "OCEAN11";
    _nom = "KOUOMO";
    _prenom = "Merveille";
}

Client::Client(std::string id, std::string nom, std::string prenom) : _idclient(id), 
    _nom(nom), _prenom(prenom){}


std::string Client::afficherClient() const 
{
    return "Le client ayant l'ID " + _idclient +  " a pour nom " + _nom + " et prenom " + _prenom;
}
std::string Client::idClient() const
{
    return _idclient;
}
const std::string& Client::nom() const
{
    return _nom;
}
const std::string& Client::prenom() const
{
    return _prenom;
}

void Client::updateIdClient(std::string idclient)
{
    _idclient = idclient;
}
void Client::updateNom(std::string nom)
{
    _nom = nom;
}
void Client::updatePrenom(std::string prenom)
{
    _prenom = prenom;
}

bool Client::operator == (const Client& client) const
{
    return _idclient == client.idClient() && _nom == client.nom() && _prenom == client.prenom();
}