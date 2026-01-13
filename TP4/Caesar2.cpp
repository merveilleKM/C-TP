#include "Caesar2.h"

Caesar2::Caesar2(std::string plain, std::string cipher, int decal) : Encrypt(plain, cipher)
{
    _decal = decal;
}

const int Caesar2::get_Decalage() const
{
    return _decal;
}
void Caesar2::update_Decalage(int d)
{
    _decal = d;
}

//encodage message non chiffre
const std::string Caesar2::encode()
{
    for (unsigned int i = 0; i < _plain.length(); i++)
    {
        unsigned char c = (unsigned char) _plain[i];
        _plain[i]=(unsigned char)((c+_decal+127)%127);
    }
    return _plain + "\n";
}

//decodage message chiffre
const std::string Caesar2::decode()
{
    for (unsigned int i = 0; i < _cipher.length(); i++)
    {
        unsigned char c = (unsigned char) _plain[i];
        _cipher[i]=(unsigned char)((c-_decal+127)%127);
    }
    return _cipher + "\n";
}         