#pragma once
#include "Pojazd.h"
#include "Silnik.h"
#include <iostream>


class Samochod: public Pojazd{

    public:

        //konstruktor klasy samochod
        Samochod(){}
        //konstruktor inicjalizujacy wartosci
        Samochod(Silnik & type, std::string color, double counter): Pojazd(4, counter, color){
            m_type = type;
        }

    protected:

        Silnik m_type; // smienna przechowujaca typ silnika w samochodzie

};