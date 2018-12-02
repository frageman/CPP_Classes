#pragma once
#include <iostream>

class Silnik{

    public: 
        //konstruktor klasy Silnik zerujacy wartosci
        Silnik(): m_power(0), m_litre(0), m_fuel("NULL"){}
        //konstruktor inicjalizujący
        Silnik(int power, double litre, std::string fuel){

            m_power = power;
            m_litre = litre;
            m_fuel = fuel; 
        }


    private:

        int m_power; //zmienna przechowujaca moc
        double m_litre; //zmienna przechowujaca pojemnosc
        std::string m_fuel; // zmienna przechowujaca rodzaj paliwa
};