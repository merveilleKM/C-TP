#include <iostream>
#include "date.h"
#include "client.h"
#include "hotel.h"
#include "reservation.h"

int main()
{
    Date pi_day(30,4,2025);
    Client cl1("cl1", "KOUOMO", "Merveille");
    Hotel awae("001", "Hotel des marges", "Yaounde");
    std::cout << "Le nom du client est " << cl1.nom() << " " << cl1.prenom() << std::endl;
    //std::cout << awae.nbChambres();
    Chambre chb1(001, "Chambre de luxe", 500000.0);
    Chambre chb2(002, "Chambre de modeste", 5000.0);
    awae.addChambre(chb1);
    awae.addChambre(chb2);
    std::cout << "Notre hotel compte " << awae.nbChambres() << " chambres notamment : \n " << awae.showChambre() ;
    awae.removeChambre(chb2);
    std::cout << "Notre hotel compte " << awae.nbChambres() << " chambres notamment : \n " << awae.showChambre() ;

    Reservation res(pi_day, 5, awae, chb1, cl1, 5000);
    std::cout << res.montantTotal();


    return 0;
}