#ifndef BOOKDB_H
#define BOOKDB_H

#include<string>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Book.cpp"
#include "iterator.cpp"

class BookCollection:private iterator
{
    private:
    std::vector<Book*> BookDB;
    int currentIndex = 0;
    
    public:
        bool hasNext(){
           if(BookDB.size() < currentIndex) return true;
            return false;
        }

    Book* next(){
        if(hasNext())
        {
            return BookDB[currentIndex++];
        }
        return nullptr;
    }

  
        void addItem(Book &b){
            BookDB.push_back(&b);
        }



};
#endif BOOKDB_H