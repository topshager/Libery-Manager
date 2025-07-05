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
    char* title = new char[100];
    cout <<"Enter the book title" << endl;
    cin.getline(title,100);
    int* rating = new int;
    cout << "Enter the book rating"<< endl;
    cin >> *rating;
    char* author = new char[100];
    cout << "Enter author name" << endl;
    cin.getline(author,100);
    char* isb = new char[100];
    cout << "Enter book ISB number" << endl;
    cin.getline(isb,100);
    int* copies = new int;
    char* category = new char[100];
    cout <<"please choose a categroy";



    




}

int subtractBook(int a, int b){
    return a - b;
}

