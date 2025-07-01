#include <iostream>
using  namespace std;



class Media{
private:
    char  *title;
    int rating;

public:

    Media(char *t, int rating){
        title = new char[strlen(t)+1];
        strcpy(title,t);
    }
    
    Media(const Media& b){
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
    }
    
    Media& operator=(const Media& b){
        if (this == &b) return *this;
        delete[] title;
        title = new char[strlen(b.title)+1];
        strcpy(title,b.title);
        return *this;
    }
    ~Media(){
        delete[] title;
    }

    void show() {
        std::cout << title << std::endl;
    }
};