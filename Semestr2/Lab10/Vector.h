#pragma once
#include <iostream>
#include "TestObject.h"

class Vector {

    public:

        Vector(){}

        template<typename T>
        static void Initialise(const int size)
        {   Vector *temp = new Vector;
            temp->setSize(size);
        }

        
        static void Initialise(const int size, TestObject tmp)
        {   
          
          
        }
        
         static void Initialise(const int size, const TestObject *)
        {   
           
          
        }

        template<typename T>
        static T & At(int ID)  {

          
        }

        template<typename T>
        static void Reset()  {
            
            Vector *temp = new Vector;
            temp->setSize(0);
            
        }

     

        static int Size() {

            Vector *temp = new Vector;
            return temp->getSize();
        }

        void setSize(int size){
            m_size = size;
        }
        
        int getSize() const{
            return m_size;
        }
      

    private:

        int *m_vector;
        int m_size;
        int m_ID;



};