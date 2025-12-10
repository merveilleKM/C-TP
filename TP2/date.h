#include <iostream>
#include <vector>

#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int _jour;
    int _mois;
    int _annee;
public:
    Date();
    Date(int jour, int mois, int annee);
    bool isDate(int jour, int mois, int annee);
    int getJour() const;
    int getMois() const;
    int getAnnee() const;
    void setJour(int jour);
    void setMois(int mois);
    void setAnnee(int annee);
};
#endif
