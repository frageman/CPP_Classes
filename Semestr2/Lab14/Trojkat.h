#pragma once
#include <math.h>
#include "Ksztalt.h"

//klasa Trojkat dziedziczaca po klasie Ksztalt
class Trojkat:public Ksztalt{

    public:

        //konstruktor klasy Trojkat
        Trojkat(int a, int b, int c): Ksztalt(), m_a(a), m_b(b), m_c(c) {}

        //metoda liczaca pole powierzchni 
        double polePow(void) const{
             double x = (m_a + m_b + m_c)/2.;
             return (sqrt(x*(x-m_a)*(x-m_b)*(x-m_c)));
        }

        //metoda zwracajaca strumien z tekstem do wypisania
        std::ostream& print(std::ostream& strumien) const{
             
            strumien<<"Trojkat o bokach: "<<m_a<<" "<<m_b<<" "<<m_c<<std::endl;
            return strumien;
        }

    private:
        //zmienne przechowujace dlugosci bokow
        int m_a, m_b, m_c;
      
};