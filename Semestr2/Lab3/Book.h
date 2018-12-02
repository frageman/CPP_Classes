#pragma once
#include <string>
#include <iostream>
#include "Page.h"

class Book: public Page{

    public:
        //konstruktor klasy Book inicjalizujący pierwszą stronę książki
        Book(std::string a = "dummy"){
            Page * tmp_page = new Page();
            tmp_page->AddText("Title Page");
            m_autor = "anonym";
            m_title = a;
            m_size = 1;
            m_pages = new Page*;
            m_pages[0] = tmp_page;
        }
        
        //funkcja @AddPage służąca do kolejnych stron w książce
        void AddPage(Page *&a);
        //funkcja @Print służaca do wypisywania stron w książce
        void Print() const;

        //funkcja @Copy służąca do kopiowania książki
        void Copy(Book *&a);

        //funkcja @AddTitle ustawia tytuł ksiązki
        void AddTitle(std::string title);

        //funkcja @AddText dodaje tekst na odpowiednia strone
        void AddText(std::string text);

        //funkcja @GetTitle zwraca tytuł strony
        std::string GetTitle() const{
            return m_title;
        }

        //destruktor klasy Book "czyszczący" pamięć po tablicy m_pages
        ~Book();

    private:
        // zmienna przechowująca informacje o autorze
        std::string m_autor;
        // zmienna przechowująca tytuł
        std::string m_title;
        // zmienna przechowująca rozmiar książki
        int m_size;
        // tablica wskaźników na strony w książce
        Page** m_pages;

};