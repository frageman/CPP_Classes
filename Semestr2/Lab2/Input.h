#pragma once
#include <iostream>

struct Input {

    public:
            //kontruktor klasy Input
            Input(){}
            //destruktor klasy Input
            virtual ~Input(){}

            //funckja @text wypisująca obraz pochdzący z urządzeń wejścia
            void text() const;
            //funkcja @name wypisująca nazwe podłączonego urządenia
            void name() const;

    private:


    protected:
            //zmienna m_text przechowująca obraz
           char m_text;
           //zmienna m_name przechowująca nazwe sprzętu
           std::string m_name;

};


struct Komputer: public Input{

    public:
            //konstruktor klasy Komputer przypisujący wartosci do zmiennej m_text i m_name
            Komputer(char l){
                
                    m_text = l;
                    m_name = "komputer";
                }
             //destruktor klasy Komputer
            ~Komputer(){}
            


    private:



};



struct OdtwarzaczDVD: public Input {


    public:
            //konstruktor klasy OdtwarzaczDVD przypisujący wartosci do zmiennej m_text i m_name
            OdtwarzaczDVD(char l){
                
                    m_text = l;
                    m_name = "DVD";
                }
             //destruktor klasy OdtwarzaczDVD
            ~OdtwarzaczDVD(){}
          

    private:




};