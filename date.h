#ifndef DATE_H
#define DATE_H

/* Class for date in format "01.01.2000" */
class Date
{
    int day,    // Day field
        month,  // Month field
        year;   // Year field

public:

    /* Constructors */

    /* Default constructor */
    Date();
    /* Constructor with parameters */
    Date(int day, int month, int year);

    /* Accessors */
};

#endif // DATE_H
