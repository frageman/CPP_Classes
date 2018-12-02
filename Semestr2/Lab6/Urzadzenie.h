#pragma once
#include <iostream>
#include "Rozdzielczosc.h"

class Urzadzenie {

    public:
        //konstruktor klasy urzadzenie
        Urzadzenie(Rozdzielczosc roz): m_roz(roz){}
        //funkcja rodzaj() zwracajaca nazwe urzadzenia
        virtual std::string rodzaj() const{
            return "Urzadznie";
        }
        //wirtulny destruktor klasy Urzadzenie    
         virtual ~Urzadzenie(){}
   
    protected:
        //zmienna m_roz przechowująca element odpowiedzialny za rozdzielczosc danego urzadzenia
            Rozdzielczosc m_roz;

};