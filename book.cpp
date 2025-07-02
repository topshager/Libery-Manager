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
        strcpy(author,b.author);
    }

    Book& Book::operator=(const Book& b){
        if (this == &b)
            return *this;

        Media::operator=(b);
        delete[]   author ;

        author= new char[strlen(b.author)+1];
        strcpy(author,b.author);

        return *this;
    }

    Book::~Book(){
        delete [] author;
    }

    void Book::show() {
        Media::show();  
        std::cout << "Author: " << author << std::endl;
    }