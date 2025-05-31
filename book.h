#ifndef BOOK_H
#define BOOK_H
#include "library.h"
#include <iostream>
using namespace std;


class Book : public LibreryItem
{
private:
    int pageCount;
public:
    Book(const std::string& t,const std::string& a, int y ,const std::string& i,int pages)
        : LibreryItem(t,a,y,i),pageCount(pages){}
    
    void displayInfo()const override{
        LibreryItem::displayInfo();
        std::cout << "Pages: " << pageCount << "\n";
    }
};

#endif