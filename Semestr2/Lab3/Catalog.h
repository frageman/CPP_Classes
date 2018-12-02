#pragma once
#include "Book.h"


class Catalog: public Book{

    public:

        //konstruktor klasy Catalog przypisujący mu nazwe i zerujący liczbe ksiażek oraz rozmiar
        Catalog (std::string name ){

            m_name = name;
            m_books = 0;
            m_size = 0;

        }

        //funckja @AddBook dodająca ksiązki do katalogu
        void AddBook(Book * a);

        //Funckja @print wypisująca nazwe katalogu i zawrte w nim książki
        void Print() const;

        //destruktor klasy Catalog "czyszczący" pamięc po tablicy m_books
        ~Catalog();

    private:
        //zmienna typu string przechowująca nazwe katalogu
        std::string m_name;
        //tablica wskaźników na kolejne książki przechowywane w katalogu
        Book** m_books;
        //zmienna przechowująca rozmiar katalogu
        int m_size;


};