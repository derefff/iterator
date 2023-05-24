#include <stdlib.h>
#include <stdio.h>
//#include "Book.cpp"

class Iterator
{
private:
    virtual bool hasNext() const = 0;
    virtual void next() = 0;
};