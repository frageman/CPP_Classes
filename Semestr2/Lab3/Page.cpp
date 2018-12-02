#include "Page.h"


Page * Page::Copy() const{

    Page *tmp = new Page();
    tmp->AddHeader(m_header);
    tmp->AddText(m_text);

    return tmp;

}


void Page::Print () const{

    std::cout<<"Page::header "<<m_header<<std::endl;
    std::cout<<"Page::text "<<m_text<<std::endl;
    std::cout<<std::endl;
    
}