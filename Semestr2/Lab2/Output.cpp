#include "Input.h"
#include "Output.h"
using namespace std;

void Output::podlaczenie () const{

    cout << "Podlaczono "<<m_name<<" i ";

}


void Output::Wyswietl(Input* k) const{
    
    podlaczenie();
    k->name();
    cout<<endl;

    
    for(int i=0; i<m_szer; i++)
    {   if(m_name == "rzutnik")
             cout<<"_";
        else cout<<"-";
    }

    cout<<endl;

    for(int i=0; i<m_wys; i++){
        for(int j=0; j<m_szer; j++)
            k->text();
        cout<<endl;
    }


    for(int i=0; i<m_szer/2; i++){
        if(m_name == "rzutnik")
            cout<<"_ ";
        else cout<<"- ";
    }
    
    cout<<endl;
    cout<<endl;

}
