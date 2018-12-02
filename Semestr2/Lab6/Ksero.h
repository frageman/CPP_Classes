#pragma once
#include "Papierozerne.h"

class Ksero: virtual public Papierozerne{

    public:
        //konstruktor klasy Ksero
        Ksero(Rozdzielczosc roz): Papierozerne(roz){}
        
        //funkcja rodzaj zwracajaca nazwe uzytego urzadzenia
        virtual std::string rodzaj() const{
            return "Ksero";
        }

        //wirtualny destruktor klasy Ksero
        virtual ~Ksero(){}
};