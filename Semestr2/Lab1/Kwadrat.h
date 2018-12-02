#pragma once
#include "Ksztalt.h"


class Kwadrat:public Ksztalt {


    public:
        Kwadrat (int a);
        void wypisz(std::ostream&) const;
       float polePow() const;

    private: 

        int m_a;

};