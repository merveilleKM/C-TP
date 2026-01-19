#include <iostream>
#include "Encrypt.h"
#include "Enigma.h"

int main()
{
    Enigma enigme("papa","papa","clemagiqueabeaucoup");
    std::string read;
    read = enigme.read("../Fichiers/test.txt") ;
    enigme.updatePlain(read);
    
    //enigme.write("../Fichiers/test.txt", "Le principe est relativement simple : après chaque lettre chiffrée, le premier rotor tourne d'une position");
    //std::cout << enigme.getcle().size() << std::endl;
    std::cout << enigme.encode();
    
    return 0;
}