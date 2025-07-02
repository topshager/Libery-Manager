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
    Book(const char*  t,int r,const char* a );
    Book(const Book& b);
    Book& operator=(const Book& b);
    ~Book();
    void show();
};

#endif;