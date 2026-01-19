#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int _jour;
    int _mois;
    int _annee;
public:
    Date(/* args */);
    Date(int jour, int mois, int annee);
    const int getJour() const;
    const int getMois() const;
    const int getAnnee() const;
    const std::string getDate() const;

    void updateDate(int jour, int mois, int annee);
    bool isDate(int jour, int mois, int annee);
};

#endif