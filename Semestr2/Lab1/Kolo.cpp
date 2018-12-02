#include "Kolo.h"
#include "Ksztalt.h"
#include<math.h>

Kolo::Kolo(int r){

    m_r=r;


}

float Kolo::polePow() const{

    float pi;
    pi= 4*atan(1.0);

    return pi*m_r*m_r;
}

void Kolo::wypisz(std::ostream&) const{

    std::cout<<"Kolo o promieniu: "<<m_r<<std::endl; 
}