#ifndef MEDIA_H_
#define MEDIA_H_

#include <iostream>
#include <cstring> 
using  namespace std;



class Media{
private:
    char  *title;
    int rating;

public:

    Media(const char *t, int r){
        title = new char[strlen(t)+1];
        strcpy(title,t);
        rating = r;
    }
    
    Media(const Media& b){
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
        rating = b.rating;
    }

    Media& operator=(const Media& b){
        if (this == &b) return *this;
        delete[] title;
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
        rating = b.rating;
        return *this;
    }
    ~Media(){
        delete[] title;
    }

    void show() {
        std::cout << title << std::endl;
    }
};

#endif;