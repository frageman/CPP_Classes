#pragma once
#include "Ksztalt.h"


class Kolo:public Ksztalt{


    public:
         Kolo(int r);
         void wypisz(std::ostream&) const;
         float polePow() const;

    private:
        int m_r;

};