#ifndef LIBRARY_h
#define LIBRARY_H
#include <iostream>
using namespace std;
class LibreryItem
{
private:
    std::string title;
    std::string author;
    int year;
    std::string id;
public:
    virtual void displayInfo() const;
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