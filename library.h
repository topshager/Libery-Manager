class Media:
    - string* title   (dynamically allocated)
    - int rating

    + constructor(title_string, rating_int)
    + copy constructor (deep copy)
    + assignment operator (deep copy)
    + virtual destructor

    + virtual function display()
    + operator<< overload

class Book inherits Media:
    - string* author   (dynamic)

    + constructor(title, rating, author)
    + copy constructor
    + assignment operator
    + destructor

    + override display()
    + operator<< overload


class Movie inherits Media:
    - int duration

    + constructor(title, rating, duration)
    + override display()
    + operator<< overload