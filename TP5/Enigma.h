#include <iostream>
#include "Encrypt.h"
#include <vector>

#ifndef ENIGMA_H
#define ENIGMA_H

class Enigma : public Encrypt
{
private:
    std::vector<char> _cle;
public:
    Enigma(std::string plain, std::string cipher, std::string decalage);
    const std::vector<char> getCaracter(std::string &cle);
    std::string getcle() const;

    const std::string encode() override;
    const std::string decode() override;

    friend std::ostream& operator<< (std::ostream& os, const Enigma& enigme);
};

#endif