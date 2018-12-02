#pragma once
#include <iostream>

class Silnik{

    public: 
        //konstruktor inicjalizujący
        Silnik(int power = 0, double litre = 0.0, std::string fuel = "None"){

            m_power = power;
            m_litre = litre;
            m_fuel = fuel; 
        }


    private:

        int m_power; //zmienna przechowujaca moc
        double m_litre; //zmienna przechowujaca pojemnosc
        std::string m_fuel; // zmienna przechowujaca rodzaj paliwa
};