#ifndef ITERATOR_H
#define ITERATOR_H

#include <stdlib.h>
#include <stdio.h>
#include "Book.cpp"

class Iterator
{
private:
    virtual bool hasNext() const = 0;
    virtual Book* next() = 0;
};

#endif ITERATOR_H