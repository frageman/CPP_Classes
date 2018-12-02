#pragma once
#include "PojazdTrakcyjny.h"
#include "Samochod.h"

class Trolejbus: public virtual Samochod, public virtual PojazdTrakcyjny{


    public:
        Trolejbus(){}
        Trolejbus(Silnik silnik, double counter): Pojazd(0, counter, "niebieski") {m_silnik = silnik; }




    private:






};