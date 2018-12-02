#pragma once
#include <iostream>
#include "UniquePointer.h"


//klasa Object
class Object {

    public:

        //konstruktor klasy Object przypisujacy nazwe
        Object(std::string name = "None"): m_name(name){}

        //funkcja Print wypisujaca nazwe obiektu
        void Print() const{
            std::cout<<"name ''"<<m_name<<"''."<<std::endl;
        }

        //destruktor klasy Object
       ~Object(){}

    private:

        //zmienna m_name przechowująca nazwe obiektu
        std::string m_name;


};