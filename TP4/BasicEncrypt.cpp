#include "BasicEncrypt.h"

BasicEncrypt::BasicEncrypt(std::string plain, std::string cipher) : Encrypt(plain,cipher)
{
}

const std::string BasicEncrypt::decode()
{
    return "le message non chiffre est  " + _plain + " et le message chiffre est " + _cipher;;
}

const std::string BasicEncrypt::encode()
{
    return "le message non chiffre est  " + _plain + " et le message chiffre est " + _cipher;;
}