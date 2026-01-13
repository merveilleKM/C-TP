#include <iostream>
#include "Encrypt.h"

#ifndef VIGENERE_H
#define VIGENERE_H

class Vigenere : public Encrypt
{
private:
    std::string _decal;
public:
    Vigenere(std::string plain, std::string cipher, std::string decal);
    void updateDecalage(std::string decal);

    const std::string encode() override;
    const std::string decode() override;
};


#endif