#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
using  namespace std;
#include "media.h"
#include <cstring>

class Book : public Media
{
private:
    char* author;

public:
    Book(const char*  t,int r,const char* a ): Media(t,r)
    {
        author = new char[strlen(a)+1];
        strcpy(author,a);
    }

    Book(const Book& b) : Media(b)
    {
        author = new char[strlen(b.author)+1];
        strcpy(author,b.author);
    }

    Book& operator=(const Book& b){
        if (this == &b)
            return *this;
        Media::operator=(b);
        delete[]   author ;
        author= new char[strlen(b.author)+1];
        strcpy(author,b.author);
        return *this;
    }

    ~Book(){
        delete [] author;
    }

    void show() {
        Media::show();  
        std::cout << "Author: " << author << std::endl;
    }
};

#endif;