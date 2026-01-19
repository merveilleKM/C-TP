#include "Enigma.h"

const std::vector<char> Enigma::getCaracter(std::string &cle)
{
    std::vector<char> myvector;
    cle.resize(26);
    for (unsigned int i = 0; i < cle.size(); i++){
        myvector.push_back(cle[i]);
    }
    // if (myvector.size() != 26)
    // {
    //     myvector.resize(18);
    //     return myvector;
    // }
    return myvector;
}

std::string Enigma::getcle() const
{
    std::string tmp = "";
    for (auto a : _cle)
    {
        tmp = tmp + a;
    }
    return tmp;
}

Enigma::Enigma(std::string plain, std::string cipher, std::string decalage) : Encrypt(plain, cipher)
{
    _cle = getCaracter(decalage);
}

const std::string Enigma::encode()
{
    for (unsigned int i = 0; i < _plain.length(); i++)
    {
        if (_plain[i] >= 'a' && _plain[i]<='z' )
        {
            _plain[i] = (_plain[i] + _cle[i%26] - 'a')%26 + 'a' ;
        }
    }
    return _plain;
}

const std::string Enigma::decode()
{
    for (unsigned int i = 0; i < _cipher.length(); i++)
    {
        /* code */
    }
    return " ";
}

std::ostream& operator<< (std::ostream& os, const Enigma& enigme)
{
    os << "L'enigme cree a pour mot non chiffre " << enigme.plain() << " et pour mot chiffre " << enigme.cipher() << " et pour cle de chiffrement " << enigme.getcle();
    return os;
}