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
    Encrypt(/* args */);
    virtual std::string plain() const;      //afficher message non chiffre
    virtual std::string cipher() const;      // afficher message chiffre

    std::string encode();           //encodage message non chiffre
    std::string decode();           //decodage message chiffre
};


#endif