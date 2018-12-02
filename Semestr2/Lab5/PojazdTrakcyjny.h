#pragma once
#include "Pojazd.h"
#include "Silnik.h"

class PojazdTrakcyjny: public Pojazd{

    public:
        PojazdTrakcyjny(){}
        PojazdTrakcyjny(Silnik silnik): m_type(silnik){}
    

    private:

        Silnik m_type;



};