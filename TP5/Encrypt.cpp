#include "Encrypt.h"

Encrypt::Encrypt(std::string plain, std::string cipher) : _plain(plain), _cipher(cipher)
{
}

void Encrypt::updatePlain(std::string plain){
    _plain = plain;
}

void Encrypt::updateCipher(std::string cipher){
    _cipher = cipher;
}

const std::string Encrypt::plain() const
{
    return _plain;
}

const std::string Encrypt::cipher() const
{
    return _cipher;
}

void Encrypt::write(std::string chemin, std::string texte)
{
    //std::string monFichier(chemin);
    std::fstream  monChemin(chemin);

    if (!monChemin.is_open())
    {
        std::ofstream monChemin(chemin.c_str());  //creer fichier si existe pas encore
    }
    std::ofstream file(chemin);
    file << texte;
}

std::string Encrypt::read(std::string chemin)
{
    std::ifstream inputFile(chemin); 
    std::string ligne = " \n";
    while (getline(inputFile, ligne))
    {
        return ligne;
    }
}