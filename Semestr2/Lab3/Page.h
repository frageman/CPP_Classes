#pragma once
#include <string>
#include <iostream>


class Page{

    public:
        //konstruktor klasy Page przypisujący puste wartosci naglowkowi i tresci
        Page(){
            m_header = "empty";
            m_text = "empty";
        }

        // funkcja @AddHeader ustala tytuł strony
        void AddHeader (const std::string head){
                m_header = head;
            
        }

        // funkcja @Copy służy do kopiowania stron
        Page * Copy() const;

        //funkcja @AddText służy do dodawania tekstu do strony
        void AddText(std::string text){
                m_text = text;
        }

        //funkcja @Print wypisuje strone
        void Print () const;

        //funcja @GetHeader zwraca nagłówek
        std::string GetHeader(){
            return m_header;
        }

        //funkcja @GetText zwraca tekst zapisany na stronie
        std::string GetText(){
            return m_text;

        }

    private:
        //zmienna przechowująca nagłówek
        std::string m_header;
        //zmienna przechowująca tekst 
        std::string m_text;
        





};