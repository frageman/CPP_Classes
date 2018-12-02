#pragma once
#include <iostream>
#include "ObiektMiotajacy.h"

class ObiektMiotajacy;

//klasa typ
class typ {

    public:
        //konstruktor klasy typ pobierajacy obiekt oraz numer typu
        typ(ObiektMiotajacy * object, int type): m_object(object), m_type(type){}

        //metoda PrzedstawSie() ktora wypisuje na ekran nazwe i adres typu
        virtual void PrzedstawSie(){
            std::cout<<"Nazywam się "<<m_type<<"(adres obiektu: "<<this<<")"<<std::endl;
        }
        
        //metoda zwracajaca numer typu
        int GetType() const { return m_type;}
        
        //wirtualny destruktor klasy typ
        virtual ~typ(){
        }

    private:

        ObiektMiotajacy * m_object; //zmienna m_object przechowujaca objekt
        int m_type; //zmienna m_type przechowujaca numer typu
};



//klasa typ1
class typ1: public typ{

    public:
        //konstruktor klasy typ1
        typ1(ObiektMiotajacy * object = NULL, int type = 1): typ(object, type){} 
      
};

//klasa typ2
class typ2: public typ{
    
    public: 
        //konstruktor klasy typ2
        typ2(ObiektMiotajacy * object = NULL, int type = 2): typ(object, type){}
        
    };

//klasa typ3
class typ3: public typ1{
        
    public:
        //konstruktor klasy typ3
        typ3(ObiektMiotajacy * object = NULL, int type = 3): typ1(object, type){}
        
        //wirtualny destruktor klasy typ3
        virtual ~typ3(){}
    };

//klasa typ4
class typ4: public typ2{
    
    public:
        //konstruktor klasy typ4
        typ4(ObiektMiotajacy * object = NULL, int type = 4): typ2(object, type){}
  
        //wirtualny destruktor klasy typ4
        virtual ~typ4(){}

    };

//metoda Przetwprz() przetwarzajaca rzucony przez ObiektMiotajacy typ
void Przetworz(typ * wyjatek){
    
    wyjatek = new typ1;
    std::cout<<"Przetworz - wyjatek typu "<<wyjatek->GetType()<<" o adresie "<<wyjatek<<std::endl; 
    delete wyjatek;
     
    throw;

   

}