#include<iostream>
#include<fstream>

#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt
{
protected:
    std::string _plain;     //message non chiffre
    std::string _cipher;        //message chiffre
private:
    
public:
    Encrypt(std::string plain, std::string cipher);
    std::string plain() const;      //afficher message non chiffre
    std::string cipher() const;      // afficher message chiffre

    virtual const std::string encode() = 0;           //encodage message non chiffre
    virtual const std::string decode() = 0;           //decodage message chiffre
};


#endif