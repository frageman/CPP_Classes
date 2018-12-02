#include "Trojkat.h"
#include "Ksztalt.h"
#include <math.h>

Trojkat::Trojkat(int a, int b, int c){

        m_a=a;
        m_b=b;
        m_c=c;


}

Trojkat::~Trojkat(){



}

float Trojkat::polePow() const{
    float x;
    x= (m_a+m_b+m_c)/2;
    return sqrt(x*(x-m_a)*(x-m_b)*(x-m_c));


}

void Trojkat::wypisz(std::ostream&) const{
     std::cout<<"Trojkat o bokach: "<<m_a<<" "<<m_b<<" "<<m_c<<std::endl;
}

