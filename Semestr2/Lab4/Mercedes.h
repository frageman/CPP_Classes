#pragma once 
#include "Samochod.h"
#include "Silnik.h"
#include <iostream>


class Mercedes: public Samochod{

    public:

        //konstruktor klasy Mercedes
        Mercedes(){}

        //konstruktor inicjalizujacy
        Mercedes(Silnik & type, double counter, std::string color = "Czarny metalic"): Samochod(type, color, counter){}



};