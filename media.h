#include <iostream>
using  namespace std;



class Media{
private:
    char  *title;
    int rating;

public:

    Media(char *t, int rating){
        title = new char[strlen(title)+1];
        strcpy(title,t);
    }
    
    + copy constructor (deep copy)
    + assignment operator (deep copy)
    + virtual destructor

    + virtual function display()
    + operator<< overload

}