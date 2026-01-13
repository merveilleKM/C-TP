#include <iostream>
#include "Encrypt.h"
#include "BasicEncrypt.h"
#include "Caesar.h"
#include <fstream>

int main()
{
    //BasicEncrypt be("mama", "papa");
    Caesar ca("les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone", "erqmrxu phuyhlooh",3);
    std::cout << ca.encode();
    std::cout << ca.decode();

    std::ifstream monChemin("C:/Users/FTAB TECH/Documents/c++/OOP/TP/C-TP/TP4/Fichiers/toto.txt");
    std::string ligne;
    while (getline(monChemin, ligne))
    {
        Caesar fichier(ligne, "texte", 3);
        std::cout << fichier.encode();
    }
    
    
    return 0;
}