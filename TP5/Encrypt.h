#include <iostream>
#include <fstream>
#include<string>

#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt
{
protected:
    //std::string _cle;
    std::string _plain;
    std::string _cipher;

public:
    Encrypt(std::string plain, std::string cipher);
    const std::string plain() const;
    const std::string cipher() const;
    // const std::string getCle() const;
    void updatePlain(std::string cle);
    void updateCipher(std::string cipher);

    void write(std::string chemin, std::string texte);
    std::string read(std::string chemin);

    virtual const std::string encode() = 0;
    virtual const std::string decode() = 0;
};

#endif