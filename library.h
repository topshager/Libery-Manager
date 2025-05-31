#ifndef LIBRARY_h
#define LIBRARY_H
#include <iostream>
using namespace std;
class LibreryItem
{
protected:
    std::string title;
    std::string author;
    int year;
    std::string id;
public:
    LibreryItem(const std::string& t,const std::string& a,int y,const std::string& i)
        : title(t),author(a),year(y),id(i) {}

    virtual void displayInfo() const {
        std::cout << "Title: " << title << "\n"
                  << "Author: " << author << "\n"
                  << "Year: " << year << "\n"
                  << "ID: " << id << "\n";
    }
    virtual ~LibreryItem();

};
 


class Book
{
private:
    int pageCount;
public:
    displayInfo();
};

class Dvd
{
private:
    int duration;
    std::string genre;
public:

};
#endif