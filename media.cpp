#include "media.h";
using namespace std;
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
    Media::Media(){
        title = "";
        rating = 0;
    }
    const char*  Media::getTitle() const{
        return title;
    }
    int  Media::getRating() const{
        return rating;
    }
    

    void Media::show() const {
      cout <<"SHowing"<<endl;

    }