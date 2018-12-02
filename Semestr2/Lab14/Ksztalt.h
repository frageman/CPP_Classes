#pragma once

template <typename T>

//klasa szablonowa counter sluzaca do zliczania ksztaltow
class counter {

    public:

        //metoda dodajaca 1 do zmiennej ile w trakcie wywolania konstruktora Ksztalt
        void add(){
            ile++;
        }

        //zmeinna odejmujaca 1 od zmiennej ile w trakcie wywolania destruktora Ksztalt
        void remove(){
            ile--;
        }

        //statyczna zmienna ile przechowujaca liczbe ksztaltow
        static T ile;

    private:


};


template <typename T>
T counter<T>::ile;

//klasa Ksztalt
class Ksztalt: public counter<unsigned>{  

    public:

        //konstruktor klasy Ksztalt
        Ksztalt(): counter<unsigned>(){
            counter<unsigned>::add();

        }

        //wirtualna metoda polePow()
        virtual double polePow() const = 0;

        //wirtualna metoda zwracajaca strumien
        virtual std::ostream& print(std::ostream& strumien) const{
            return strumien;
        }

        //destruktor klasy Ksztalt
        virtual ~Ksztalt(){
            counter <unsigned>::remove();
        }

        //metoda zwracajaca zmienna ile
        static unsigned N(){
            return counter <unsigned>::ile;
        }

    private:

};

//przeladoanie operatora << dla *ksztalt
std::ostream& operator<<(std::ostream& strumien, const Ksztalt* ksztalt){
    return ksztalt->print(strumien);

}

//przeladoanie operatora << dla **ksztalt
std::ostream& operator<<(std::ostream& strumien, const Ksztalt** ksztalt){
    const Ksztalt* tmp =  *ksztalt;
    for (unsigned i = 0 ; i < tmp->ile; i++){
        ksztalt[i]->print(strumien);
    }
    return strumien;

}















