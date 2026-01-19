#include <iostream>
#include "Encrypt.h"
#include "BasicEncrypt.h"
#include "Caesar.h"
#include <fstream>
#include "Caesar2.h"
#include "Vigenere.h"

int main()
{
    // creer le fichier // std::string monFichier("C:/Users/FTAB TECH/Documents/c++/OOP/TP/C-TP/TP4/Fichiers/toto.txt");
    //std::fstream  monChemin("Fichiers/toto.txt");
    //std::ofstream monChemin(monFichier.c_str());  //creer fichier si existe pas encore


    // Caesar2 ca("Les sanglots longs Des violons De l'automne Blessent mon coeur D'une Langueur Monotone", "Ohv#vdqjorwv#orqjv#Ghv#ylrorqv#Gh#o*dxwrpqh#Eohvvhqw#prq#frhxu#G*xqh#Odqjxhxu#Prqrwrqh",3);
    // std::cout << ca.encode();
    // std::cout << ca.decode();

    Vigenere v("Les sanglots longs Des violons De l'automne Blessent mon coeur D'une Langueur Monotone", "Rky ygtmruzy rutmy Jky bouruty Jk r'gazustk Hrkyyktz sut iukax J'atk Rgtmakax Sutuzutk", "mots");
    std::cout << v.encode();
    std::cout << v.decode();

    std::ifstream monChemin("../Fichiers/toto.txt");
    std::string ligne;
    while (getline(monChemin, ligne))
    {
        //Caesar2 fichier(ligne, "texte", 3);
        //std::cout << fichier.encode();

        Vigenere vi(ligne,"texte", "mots");
        std::cout << vi.encode();
    }

    // std::ofstream file;
    // file.open("../Fichiers/toto.txt");
    
    
    return 0;
}