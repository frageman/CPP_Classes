#pragma once
#include "Pojazd.h"
#include "Silnik.h"
#include <iostream>


class Motorower: public Pojazd{

    public:

        //konstrukotr klasy Motorower
        Motorower(): Pojazd(){}
        //konstruktor inicjalizujący
        Motorower(Silnik & type, std::string color, double counter ): Pojazd(2, counter, color){
            m_type = type;
        }

        // operator kopiujacy
        Motorower& operator=(const Motorower& motorower){
            Pojazd& pojazd = *this;
            pojazd = motorower;
            return *this;
        }

      
    protected:

        Silnik m_type;


};