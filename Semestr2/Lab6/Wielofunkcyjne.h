#pragma once
#include "Drukarka.h"
#include "Ksero.h"
#include "Skaner.h"


class Wielofunkcyjne: virtual public Drukarka, virtual public Ksero, virtual public Skaner{

    public:
        //konstruktor klasy Wielofunkcyjne
        Wielofunkcyjne(Rozdzielczosc roz1, Rozdzielczosc roz2): Papierozerne(roz1), Drukarka(roz1), Ksero(roz1), Skaner(roz2){}
        
        //funkcja rodzaj zwracajaca nazwe uzytego urzadzenia
        virtual std::string rodzaj() const{
            return "Wielofunkcyjne";
        }

        //destruktor wirtualny klasy Wielofunkcyjne
        virtual ~Wielofunkcyjne(){}
};