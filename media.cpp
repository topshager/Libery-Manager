#include "media.h";

    Media::Media(const char *t, int r){
        title = new char[strlen(t)+1];
        strcpy(title,t);
        rating = r;
    }
    
    Media::Media(const Media& b){
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
        rating = b.rating;
    }

    Media& Media:: operator=(const Media& b){
        if (this == &b) return *this;
        delete[] title;
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
        rating = b.rating;
        return *this;
    }
    
   Media::~Media(){
        delete [] title;
    }

    void Media::show() {
        Media::show();
    }