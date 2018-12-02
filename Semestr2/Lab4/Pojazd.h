#pragma once
#include <iostream>
using namespace std;

class Pojazd{

    public:
        
        //Konstruktor klasy pojazd zerujący wartosci
        Pojazd(): m_wheels(0), m_counter(0.0), m_color("NULL") {}
        //Konstruktor klasy pojazd inicjalizujący podane wartosci
        Pojazd(int wheels, double counter, std::string color): m_wheels(wheels), m_counter(counter), m_color(color){
        }

        //operator << wypisujacy tresc ogloszenia
        friend std::ostream& operator<<(std::ostream &stream, const Pojazd & pojazd){

            stream <<endl<<"Liczba kol "<<pojazd.m_wheels<<endl<<"Stan licznika "<<pojazd.m_counter<<" [km]"<<endl<<"Kolor "<< pojazd.m_color<<endl;

            return stream;
        } 

        //funkcja przypisujaca przebieg do zmiennej m_counter
        void Przebieg(int counter){
            m_counter = counter;
        }

        // operator kopiujacy zerujacy licznik
        Pojazd& operator=(const Pojazd& pojazd){

            m_color=pojazd.m_color;
            m_counter=0; 
            m_wheels=pojazd.m_wheels;
            return *this;
        }

     

    protected:

        int m_wheels; // zmienna przechowujaca liczbe kół
        double m_counter; // zmienna przechowujaca stan licznika
        std::string m_color; // zmienna przechowujaca kolor

};