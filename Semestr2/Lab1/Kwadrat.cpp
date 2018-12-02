#include "Kwadrat.h"
#include "Ksztalt.h"

Kwadrat::Kwadrat(int a){

        m_a=a;

}

float Kwadrat::polePow() const{

    float pole;
    pole=m_a*m_a;

    return pole;



}


void Kwadrat::wypisz(std::ostream&) const{

    std::cout<<"Kwadrat o boku: "<<m_a<<std::endl;
}