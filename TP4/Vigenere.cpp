#include "Vigenere.h"

Vigenere::Vigenere(std::string plain, std::string cipher, std::string decal) : Encrypt(plain, cipher)
{
    _decal = decal;
}

void Vigenere::updateDecalage(std::string decal)
{
    _decal = decal;
}

const std::string Vigenere::encode()
{
    
    for (unsigned int i = 0; i < _plain.length(); i++)
    {
        for (unsigned int j = 0; j < _decal.length(); j++)
        {
            if (j >= (unsigned int) (_decal[j]))
            {
                j = j%_decal[j];
            }
            
            if (_plain[i] >= 'A' && _plain[i]<= 'Z')
            {
                _plain[i] = (_plain[i] + j -'A')%26+'A';
            }
            if (_plain[i] >= 'a' && _plain[i]<= 'z')
            {
                _plain[i] = (_plain[i] + j -'a')%26 + 'a';
            }
        }
    }
    
    return _plain+"\n";
}

const std::string Vigenere::decode()
{
    for (unsigned int i = 0; i < _cipher.length(); i++)
    {
        for (unsigned int j = 0; j < _decal.length(); j++)
        {
            if (j >= (unsigned int) (_decal[j]))
            {
                j = j%_decal[j];
            }
            
            if (_cipher[i] >= 'A' && _cipher[i]<= 'Z')
            {
                _cipher[i] = (_cipher[i] - j -'A'+26)%26+'A';
            }
            if (_cipher[i] >= 'a' && _cipher[i]<= 'z')
            {
                _cipher[i] = (_cipher[i] - j -'a'+26)%26 + 'a';
            }
        }
    }
    
    return _cipher + "\n";
}