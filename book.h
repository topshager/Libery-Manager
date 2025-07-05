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
    char* ISB;
    int* Copies;
    char* category;

public:
    Book(const char*  t,int r,const char* a,char *i,int* c,char* ctg );
    Book(const Book& b);
    Book& operator=(const Book& b);
    Book();
    ~Book();
    void show();
};

#endif;