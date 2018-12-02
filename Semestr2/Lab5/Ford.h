#pragma once
#include "Pojazd.h"
#include "Silnik.h"


class Ford: public Pojazd{

    public:

        Ford(Silnik silnik, double counter ): Pojazd(4, counter, "czarny metalic"), m_silnik(silnik) {}

    private:

        Silnik m_silnik;

};