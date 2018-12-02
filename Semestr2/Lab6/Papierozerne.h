#pragma once
#include "Urzadzenie.h"

class Papierozerne: public Urzadzenie{

    public: 
        //konstrukor klasy Papierozerne
        Papierozerne(Rozdzielczosc roz): Urzadzenie(roz){}

        //funkcja rodzaj() zwracajaca nazwe danego urzadznenia
        virtual std::string rodzaj() const{
         return "Papierozerne";
        }
        
        //wirtualny destruktor klasy Papierozerne
       virtual ~Papierozerne(){}


};
