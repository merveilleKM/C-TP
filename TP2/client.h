#include <iostream>
#include <vector>

#ifndef CLIENT_H
#define CLIENT_H

class Client
{
private:
    std::string _idclient;
    std::string _nom;
    std::string _prenom;
public:
    Client();
    Client(std::string id, std::string nom, std::string prenom);
    std::string idClient() const;
    std::string nom() const;
    std::string prenom() const;

    void updateIdClient(std::string idclient);
    void updateNom(std::string nom);
    void updatePrenom(std::string prenom);
};

#endif