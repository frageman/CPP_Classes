#pragma once
#include "Motorower.h"
#include <iostream>


class Romet: public Motorower{

    public:
        //konstruktor klasy Romet
        Romet(): Motorower(){}
        //konstruktor inicjalizujacy
        Romet(Silnik & type, double counter, std::string color = "czerwony metalic"): Motorower (type, color, counter){}

       //operator kopiujacy
        Romet& operator=(const Romet& romet){
            Motorower& pojazd = *this;
            pojazd = romet;
            return *this;
        }


};