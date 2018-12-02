#pragma once
#include <iostream>

using namespace std;

class TestObject {

    public:

        TestObject(int ID): m_ID(ID){}

        void Print() const {
            cout << "Object with ID="<< m_ID<<endl;
        }

        void Set (int number){
            m_ID = number;
        }

        int *m_vector;
    private:

       
        int m_ID;




};