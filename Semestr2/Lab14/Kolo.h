#pragma once
#include "Ksztalt.h"

//klasa Kolo dziedziczaca po klasie Ksztalt
class Kolo: public Ksztalt{
    public:

        //konstruktor klasy Kolo
        Kolo(int r) : Ksztalt(), m_r(r) {}

        //metoda liczaca pole powieszchni
        double polePow() const{
             return 3.1415 * m_r * m_r;
        }

        //metoda zwracajaca strumien z tekstem do wypisania
        std::ostream& print(std::ostream& strumien) const{
             strumien<<"Kolo o promieniu: "<<m_r<<std::endl;
             return strumien;
        }

    private:
        //zmienna przechowujaca promien kola
        int m_r;
};