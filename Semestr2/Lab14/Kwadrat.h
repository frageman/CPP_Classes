#pragma once
#include "Ksztalt.h"

//klasa Kwadrat dzeidziczaca po klasie Ksztalt
class Kwadrat : public Ksztalt{

    public:

        //Konstruktor klasy Kwadrat
        Kwadrat(int a): Ksztalt(), m_a(a) {}

        //metoda liczaca pole powieszchni
        double polePow(void) const{
            return m_a*m_a;
        }

        //metoda zwracajaca strumien z tekstem do wypisania
        std::ostream& print(std::ostream& strumien) const{
            strumien<<"Kwadrat o boku: "<<m_a<<std::endl;
            return strumien;
        }

    private:

        //zmienna przechowujaca dlugosc boku
        int m_a;

};