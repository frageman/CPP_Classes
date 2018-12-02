#pragma once
#include<iostream>

//klasa MyClass
class MyClass {

    public:

        //konstruktor klasy MyClass
        MyClass(std::string name): m_name(name){
            std::cout<<"Created Myclass: "<<m_name<<std::endl;
        }

        //konstruktor kopiujący klasy MyClass
        MyClass(MyClass *obj){
            m_name = obj->getName();
        }

        //funkcja setName() służaca do zmiany nazwy
        void setName(std::string name){
            m_name = name;
        }

        //funckja getName() zwracająca nazwe 
        std::string getName() const { return m_name; }

        //destruktor klasy MyClass
        ~MyClass(){
            std::cout<<"Destroyed MyClass: "<<m_name<<std::endl;
            
        }
    private:

        //zmienna typu string przechowująca nazwe
        std::string m_name;


};