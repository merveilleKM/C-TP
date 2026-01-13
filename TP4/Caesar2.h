#include <iostream>
#include "Encrypt.h"

#ifndef CAESAR2_H
#define CAESAR2_H

class Caesar2 : public Encrypt
{
private :
    int _decal;
public :
Caesar2(std::string plain, std::string cipher, int decal);
const int get_Decalage() const;
void update_Decalage(int d);

const std::string encode() override;           //encodage message non chiffre
const std::string decode() override;            //decodage message chiffre
};

#endif