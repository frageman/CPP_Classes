#pragma once 
#include "Ksztalt.h"

class Trojkat: public Ksztalt{

    public:
        
        Trojkat(int a, int b, int c);
        virtual ~Trojkat();
        void wypisz(std::ostream&) const;
        float polePow() const;

    private:

        int m_a;
        int m_b;
        int m_c;


};