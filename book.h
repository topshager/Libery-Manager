#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
#include "library.h"

class Book
{
private:
    int pagecount;
public:
    Book(const std::string& t,const std::string& a, int y ,const std::string& i,int pages)
        : LibreryItem(t,a,y,i),pagecount(pages){}
    
    void displayInfo()const override{
        LibreryItem::displayInfo():
        std::cout << "Pages: " << pageCount << "\n";
    }
};

#endif