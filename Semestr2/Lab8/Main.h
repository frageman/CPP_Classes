#include "MyClass.h"
#include "MyException.h"

//zmienna globalna zwracajaca wartosc lsowa od 0 do 3
int ReturnValueID;

//deklaracje funckji globalnych
void Fold1(MyClass * obj);
void Fold2(MyClass *obj);
void Fold3(MyClass *obj);
void MyTerminate();

//funkcja Fold1 będąca pierwszym stopniem zagnieżdżenia
void Fold1(MyClass * obj){

    MyClass tmp(obj);
    std::cout<<"Copy created MyClass: "<<tmp.getName()<<std::endl;
    std::cout<<"Entering fold level 1"<<std::endl;
    std::set_terminate(MyTerminate);
    tmp.setName("F1");
    Fold2(&tmp);

}

//Funckja Fold2 będąca drugim stopniem zagnieżdżenia 
void Fold2(MyClass *obj){

    MyClass tmp(obj);
    std::cout<<"Copy created MyClass: "<<tmp.getName()<<std::endl;
    std::cout<<"Entering fold level 2"<<std::endl;
    tmp.setName("F2");
    Fold3(&tmp);

}

//Funkcja Fold3 zawierająca wewnętrzy mechanizm rzucania wyjątków
void Fold3(MyClass *obj){
    
    MyClass tmp(obj);
    std::cout<<"Copy created MyClass: "<<tmp.getName()<<std::endl;
    std::cout<<"Entering fold level 3"<<std::endl;
    tmp.setName("F3");

    try 
    {   
        switch(ReturnValueID){
            case 0: 
                    {throw 9.242f; 
                     break;}
            case 1: 
                    {throw -87; 
                     break;}
            case 2: 
                    {throw 16u; 
                     break;}
            case 3: 
                    {throw 3.14157; 
                     break;}  
        }
    }

    catch (double fLiczba){
        std::cout<<"Caught an exception of type: double"<<std::endl;
    }
    catch (int nLiczba){
        std::cout<<"Caught an exception of type: int"<<std::endl;
    }
    catch (unsigned uLiczba){
        std::cout<<"Caught an exception of type: unsigned"<<std::endl;
    }
    catch (float fLiczba){
        std::cout<<"Caught an exception of type: float"<<std::endl;
    }

    throw MyException();
    
}

//Funkcja MyTerminate zastepujaca domysla funkcje terminate()
void MyTerminate(){

    std::cout<<"--- UWAGA: blad mechanizmu wyjatkow ---"<<std::endl;
    exit(1);
}
