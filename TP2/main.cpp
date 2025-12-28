#include <iostream>
#include "date.h"
#include "client.h"
#include "hotel.h"
#include "reservation.h"

int main()
{
    Date pi_day(30,4,2025);
    Client cl1("cl1", "KOUOMO", "Merveille");
    Client cl2;
    Hotel awae("001", "Hotel des marges", "Yaounde");
    
    Chambre chb1("Single");
    Chambre chb2("Single");
    Chambre chb3("Suite");
    Chambre chb4("Double");
    Chambre chb5("Double");
    Chambre chb6("Single");
    Chambre chb7("Double");
    Chambre chb8("Suite");
    Chambre chb9("Double");
    Chambre chb10("Double");

    awae.addChambre(chb1);
    awae.addChambre(chb2);
    awae.addChambre(chb3);
    awae.addChambre(chb4);
    awae.addChambre(chb5);
    awae.addChambre(chb6);
    awae.addChambre(chb7);
    awae.addChambre(chb8);
    awae.addChambre(chb9);
    awae.addChambre(chb10);

    awae.addClient(cl1);
    awae.addClient(cl2);

    std::cout << awae.searchClient("OUOMO");

    return 0;
}