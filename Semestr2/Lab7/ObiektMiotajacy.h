#pragma once 
#include <iostream>
#include "Typ.h"

//klasa ObiektMiotajacy
class ObiektMiotajacy{

    public:
        //metoda Rzuc 
        void Rzuc() const{
            typ4 *wyjatek = new typ4;
            delete this;
            throw wyjatek;

        }

      

      



    private:


};

