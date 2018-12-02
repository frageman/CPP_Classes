#pragma once 
#include "Object.h"
#include <iostream>

//szablon klasy UniquePointer
template <typename T>
class UniquePointer{

    public:
       
       //konstruktor klasy
        UniquePointer(T* ptr): m_ptr(ptr){}

   
        //operator << zwracajacy strumień out
        friend std::ostream& operator<<(std::ostream& out, UniquePointer<T> & ptr){
            out<<"[pointing to "<<ptr.m_ptr<<"]";
            return out;
        }

        //operator * zwracajacy wskaznik m_ptr
        operator T*(){
            return m_ptr;
        }

        //przeciązenie operatora ->
        T* operator->(){
            return *this;
        }

        ///przeciążenie operatora=
        UniquePointer<T>& operator=(UniquePointer<T>& uptr){
             if (this != &uptr) { 
                m_ptr = uptr.m_ptr;
               
              
        }   
             else {uptr.m_ptr = m_ptr;
               
                    }
       
        return *this;
    }
    
        //destruktor klasy
        ~UniquePointer(){

            delete m_ptr;
            m_ptr = new T();
           // m_ptr = NULL;
           
        }

    private:

        T *m_ptr;  //zmienna przechowujaca wskaznik


};