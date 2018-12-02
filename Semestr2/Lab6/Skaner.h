#pragma once
#include "Papierozerne.h"
#include <sstream>


class Skaner: public Urzadzenie{

    public:
        //konstruktor klasy Skaner
        Skaner(Rozdzielczosc roz): Urzadzenie(roz){}

        //funkcja rodzaj() zwracajaca nazwe uzytego urzadzenia
        virtual std::string rodzaj() const{
            return "Skaner";
        }

        //funkcja rozdzielczosc() zwracajaca lancuch znakow bedacy rozdzielczoscia danego urzadzenia
        virtual std::string rozdzielczosc() const {
            std::ostringstream tmp;
            tmp<<m_roz.print_x()<<"x"<<m_roz.print_y();
            return tmp.str();
        }

        //wirtualny destruktor klasy Skaner
        virtual ~Skaner(){}
};