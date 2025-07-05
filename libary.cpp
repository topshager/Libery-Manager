#include "library.h";
#include "book.h";
#include <iostream>
using namespace std;
enum Category {
    FICTION,
    NONFICTION,
    SCIENCE,
    HISTORY,
    TECHNOLOGY
};

void printCategory(Category c){
    switch(c){
        case FICTION:cout <<"Fiction";break;
        case NONFICTION: cout <<"None-fiction";break;
        case SCIENCE: cout << "Science"; break;
        case HISTORY: cout <<"History";break;
        case TECHNOLOGY: cout << "Technology";break;
    }
}
void Libary::addBook()
{
    char t;
    int r;
    char a;
    char i;
    int c;
    char ctg;
    cout << "Enter title: ";
    cin>> t;

    cout << "Enter author: ";
    cin>>a;

    cout << "Enter ISBN: ";
    cin>>i;

    cout << "Enter rating: ";
    cin >> r;
    cin.ignore();

    cout << "Enter number of copies: ";
    cin >> c;
    cin.ignore();

    cout << "Choose category (0=Fiction, 1=Nonfiction, etc.): ";
    cin >> ctg;
    cin.ignore();
    Book myBook(const char*  t,int r,const char* a,char *i,int* c,char* ctg );
}

int subtractBook(int a, int b){
    return a - b;
}

