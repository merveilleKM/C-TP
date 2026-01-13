#include "Caesar.h"

Caesar::Caesar(std::string plain, std::string cipher, int decal) : Encrypt(plain, cipher)
{
    _decal = decal;
}

const int Caesar::get_Decalage() const
{
    return _decal;
}
void Caesar::update_Decalage(int d)
{
    _decal = d;
}

//encodage message non chiffre
const std::string Caesar::encode()
{
    int k=_decal;
    if (k<0)
    {
        k = (k%26)+26;
    }
    
    unsigned int a = _plain.length();
    for (unsigned int i = 0; i < a; i++)
    {
        if (_plain[i] >= 'A' && _plain[i]<= 'Z')
        {
            _plain[i] = (_plain[i] + k -'A')%26+'A';
            // decode _plain[i] = (_plain[i] - 'A' +k)%26+'A';
            //_plain[i] = _plain[(i +k -1)%26+1];
        }
        if (_plain[i] >= 'a' && _plain[i]<= 'z')
        {
            _plain[i] = (_plain[i] + k -'a')%26 + 'a';
            //_plain[i] = _plain[(i +k -1)%26+1];
        }
    }

    return _plain + "\n";
    
}

//decodage message chiffre
const std::string Caesar::decode()
{
    int k=_decal;
    if (k<0)
    {
        k = (k%26)+26;
    }
    
    unsigned int a = _cipher.length();
    for (unsigned int i = 0; i < a; i++)
    {
        if (_cipher[i] >= 'A' && _cipher[i]<= 'Z')
        {
            //_cipher[i] = (_cipher[i] + k -'A')%26+'A';
            _cipher[i] = (_cipher[i] - k -'A'+26)%26+'A';
        }
        if (_cipher[i] >= 'a' && _cipher[i]<= 'z')
        {
            //_cipher[i] = (_cipher[i] + k -'a')%26 + 'a';
            _cipher[i] = (_cipher[i] - k -'a'+26)%26 + 'a';
        }
        
    }

    return _cipher +  "\n";
}         