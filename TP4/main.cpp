#include <iostream>
#include "Encrypt.h"
#include <fstream>

int main()
{
    std::string monFichier("C:/Users/FTAB TECH/Documents/c++/OOP/TP/C-TP/TP4/Fichiers/toto.txt");
    //std::fstream  monChemin("Fichiers/toto.txt");
    // std::cout << f.is_open();
    //std::ofstream monChemin(monFichier.c_str());
    
    std::ifstream monChemin("C:/Users/FTAB TECH/Documents/c++/OOP/TP/C-TP/TP4/Fichiers/toto.txt");
    // double age = 15;
    // monChemin >> age;

    // std::string texte = "bonjour";
    // getline(monChemin, texte);

    if (monChemin)
    {
        std::string ligne;
       //monChemin << "Je suis merveille, j'ai cree ce fichier pour le TP de C++";
       while (getline(monChemin, ligne))
       {
        std::cout << ligne;
       }
       
    }else
    {
        std::cout<< "Erreur";
    }
    
    
    return 0;
}