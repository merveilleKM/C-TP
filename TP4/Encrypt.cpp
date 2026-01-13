#include "Encrypt.h"

Encrypt::Encrypt(std::string plain, std::string cipher) : _plain(plain), _cipher(cipher)
{
    
}
std::string Encrypt::plain() const
{
    return _plain;
}      //afficher message non chiffre

std::string Encrypt::cipher() const
{
    return _cipher;
}      // afficher message chiffre
