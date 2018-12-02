#pragma once
#include "Papierozerne.h"
#include <sstream>

class Drukarka: virtual public Papierozerne{

public:
    //konstruktor klasy Drukarka
    Drukarka(Rozdzielczosc roz): Papierozerne(roz){}

    //funkcja rodzaj() zwracajaca nazwe danego urzadzneia
    virtual std::string rodzaj() const{
        return "Drukarka";
    }

    //funkcja rozdzielczosc() zwracajaca lancuch znakow bedacy rozdzielczoscia danego urzadzenia
    virtual std::string rozdzielczosc() const {
        std::ostringstream tmp;
        tmp<<m_roz.print_x()<<"x"<<m_roz.print_y();
        return tmp.str();
    }
    //wirtualny destruktor klasy Drukarka
    virtual ~Drukarka(){}
};