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

    Media(const char *t, int r);
    Media(const Media& b);
    const char* getTitle() const;
    int getRating() const;
    Media& operator=(const Media& b);
    ~Media();
    Media();
    void show() const;
};

#endif;