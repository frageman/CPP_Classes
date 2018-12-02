#pragma once
#include <iostream>

class Rozdzielczosc{

    public:
        //konstruktor klasy Rozdzielczosc
        Rozdzielczosc(int x, int y): m_x(x), m_y(y){}

        //funcka print_x() zwracajaca zmienna m_x
        int print_x() const{ return m_x;}
        //funcka print_y() zwracajaca zmienna m_y
        int print_y() const{ return m_y;}

    private:
        //zmienna typu int przechowujaca pierwszy parametr rozdzielczosci
        int m_x;
        //zmienna typu int przechowujaca drugi parametr rozdzielczosci
        int m_y;

};