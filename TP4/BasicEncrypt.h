#include <iostream>
#include "Encrypt.h"

class BasicEncrypt : public Encrypt
{
private:
    
public:
    BasicEncrypt(std::string plain, std::string cipher);
    const std::string encode() override;           //encodage message non chiffre
    const std::string decode() override;           //decodage message chiffre

    std::string plain() const ;      //afficher message non chiffre
    std::string cipher() const;      // afficher message chiffre
};


