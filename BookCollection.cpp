#ifndef BOOKDB_H
#define BOOKDB_H

#include<string>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Book.cpp"

class BookCollection
{
    private:
    std::vector<Book*> BookDB;

    public:
        // BookCollection(std::string a): author(a)

        void addItem(Book &b){
            BookDB.push_back(&b);
        }

};
#endif BOOKDB_H