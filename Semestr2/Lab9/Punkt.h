#pragma once

// klasa Punkt
class Punkt{

    public:

        //konstruktor klasy Punkt
        Punkt(int x, int y): m_x(x), m_y(y){}


        template <bool T>
        //metoda szablonowa @wsp zwracajaca m_x jeśli T=0 i m_y jeśli T!=0
        int wsp() const { 
            if (T) return m_y;
            else return m_x;
        }

        //metoda @min zwracajaca mniejszą z dwóch podanych wartosci
        static int min(int x1, int x2){
            
            return x1 < x2 ? x1 : x2;
        }

        //metoda @max zwracająca wieksza z dwóch podanych wartosci
        static int max(int x1, int x2){

            return x1 > x2 ? x1 : x2;;
        }

        //metoda @min zwracająca obiekt o mniejszej wartosci
        static Punkt min(Punkt p1, Punkt p2){
            if (p1.m_x == p2.m_x) return p1.m_y < p2.m_y ? p1 : p2;
                return p1.m_x < p2.m_x ? p1:p2;
         }

        //metoda @max zwracajaca obiekt o wiekszej wartosci
        static Punkt max(Punkt p1, Punkt p2){ 
            if (p1.m_x == p2.m_x) return p1.m_y > p2.m_y ? p1 : p2;
                return p1.m_x > p2.m_x ? p1:p2;
        }
        
        //przeladowanie operatora <, zwraca prawde gdy obiekt p1 jest mniejszy od p2
        friend bool operator<(const Punkt p1,const Punkt p2){
            if (p1.m_x == p2.m_x) return p1.m_y < p2.m_y ? true : false;
                return p1.m_x < p2.m_x ? true : false;

        }

    private:

        int m_x; //zmienna m_x przechowujaca wartosc x punktu
        int m_y; //zmienna m_y przechowujaca wartosc y punktu







};