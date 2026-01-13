#include<iostream>
#include "string"
#include "Encrypt.h"

#ifndef CAESAR_H
#define CAESAR_H

class Caesar : public Encrypt
{
private:
    int _decal;
public:
    Caesar(std::string plain, std::string cipher, int decal);
    const int get_Decalage() const;
    void update_Decalage(int d);

    const std::string encode() override;           //encodage message non chiffre
    const std::string decode() override;            //decodage message chiffre
};

#endif