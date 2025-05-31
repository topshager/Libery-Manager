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
 
