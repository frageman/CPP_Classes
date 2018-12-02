#include "Book.h"


void Book::AddPage(Page *&a){
    Page * tmp_page = a->Copy();
    Page ** tmp = new Page* [m_size + 1];
    for(int i = 0; i<m_size; i++)
        tmp[i] = m_pages[i];
    tmp[m_size] = tmp_page;
    if(m_size == 1)
        delete m_pages;
    else delete[] m_pages;

    m_pages = tmp;
    m_size++;

}

void Book::Print() const{

    std::cout <<"Book::autor "<<m_autor<<std::endl;
    for (int i = 0; i<m_size; i++){
        std::cout<<"Page("<<i<<")::text "<<m_pages[i]->GetText()<<"(header: "<<m_pages[i]->GetHeader()<<")"<<std::endl;
     }
    std::cout<<std::endl;

}
           
void Book::Copy(Book *&a){

    m_autor = "(copy) "+ a->m_autor;
    m_title = a->m_title;
    m_size = a->m_size;
    delete m_pages[0];
    delete m_pages;

    m_pages = new Page*[m_size];
    for(int i=0; i< m_size; i++){
        m_pages[i]=a->m_pages[i]->Copy();
    }
}

void Book::AddTitle(std::string title){
        m_pages[0]->AddText(title);
        m_title = title;
}

void Book::AddText(std::string text){
        static int i = 1;

        if( i<m_size){
            m_pages[i]->AddText(text);
        }
        else std::cout<< "[ERROR]:: No enough pages in the book!"<<std::endl<<std::endl;
        i++;
}
 
Book::~Book(){
    for (int i=0;i<m_size;i++)
        delete m_pages[i];
    
    if (m_size == 1) 
         delete m_pages;
    else delete[] m_pages;
}