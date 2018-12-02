#pragma once
#include <iostream>

class Ksztalt {


public:

    Ksztalt(){};
    virtual ~Ksztalt() {};
    virtual void wypisz(std::ostream&) const =0 ;

    virtual float polePow() const =0;
    
private:

};


void wypisz(const Ksztalt &k);