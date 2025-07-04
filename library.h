#ifndef LIBARY_H_
#define LIBARY_H_
#include "book.h"

class Libary : public Book
{
public:    
    void addBook();
    int subtractBook(int a, int b);
};
#endif