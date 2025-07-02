#include "book.h";
#include <iostream>
#include <cstring>

    Book::Book(const char*  t,int r,const char* a ,char *i,int* c,char* ctg): Media(t,r)
    {
        author = new char[strlen(a)+1];
        ISB = new char[strlen(i)+1];
        Copies = new int(*c) ;
        category = new char[strlen(ctg)+1];

        strcpy(author,a);
        strcpy(ISB,i);
        strcpy(category,ctg);
    }

    Book::Book(const Book& b): Media(b)
    {
        author = new char[strlen(b.author)+1];
        ISB = new char[strlen(b.ISB)+1];
        category =  new char[strlen(b.category)+1];
        strcpy(author,b.author);
        strcpy(ISB,b.ISB);
        strcpy(category ,b.category);
    }

    Book& Book::operator=(const Book& b){
        if (this == &b)
            return *this;

        Media::operator=(b);
        delete[]   author ;
        delete[]   ISB ;
        delete[]   Copies;
        delete[]   category;
        

        author= new char[strlen(b.author)+1];
        strcpy(author,b.author);
        strcpy(ISB,b.ISB);
        strcpy(category ,b.category);

        return *this;
    }

    Book::~Book(){
        delete [] author;
        delete [] ISB;
        delete [] Copies;
        delete [] category;
    }

    void Book::show() {
        Media::show();  
        std::cout << "Author: " << author << std::endl;
        std::cout << "Author: " << ISB << std::endl;   
        std::cout << "Author: " << Copies << std::endl;
        std::cout << "Author: " << category << std::endl;   
    }