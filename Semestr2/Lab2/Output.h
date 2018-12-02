#pragma once
#include <iostream>
using namespace std;


class Output{

    public:
        //konstruktor klasy Output
        Output(){}
         //destruktor klasy Output
        virtual ~Output(){}
        // funckja @Wyswietl pobierajaca klase Input i wyswietlajaca zapisany w niej obraz
        // oraz ramke urządzenia wyjscia 
        void Wyswietl(Input*) const;
        //funckja @podlaczenie wypisująca nazwe urządzenia do ktorego podłączono urządzenie wejścia
        void podlaczenie () const;

    private:

    protected:
        // zmienna m_szer przechowuje szerokosc ekranu
        int m_szer;
        // zmienna m_wys przechowuje wysokosc ekranu
        int m_wys;
        //zmienna m_name przechowuje nazwe urządzenia wyjscia
        std::string m_name;

};


class Rzutnik: public Output{

    public:
        //kostruktor klasy Rzutnik przypisujący szerokosc, wysokosc i nazwe urzadzenia
        Rzutnik(int x, int y){
            m_szer = x;
            m_wys = y;
            m_name = "rzutnik";
        }
         //destruktor klasy Rzutnik
        ~Rzutnik(){}
        

    private:

};


class TelewizorLCD: public Output{

    public:
        //kostruktor klasy Telewizor przypisujący szerokosc, wysokosc i nazwe urzadzenia
        TelewizorLCD(int x, int y){
            m_szer = x;
            m_wys = y;
            m_name = "telewizor";
        }
         //destruktor klasy Telewizor
        ~TelewizorLCD(){}
        

    private:


};



