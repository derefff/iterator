#ifndef BOOKDB_H
#define BOOKDB_H

#include<string>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Book.cpp"
#include "iterator.cpp"

class BookCollection:public Iterator{
    private:
    std::vector<Book*> BookDB;
    int currentIndex = 0;
    
    public:
        bool hasNext(){
           if(BookDB.size()-1 >= currentIndex) 
           {
            return true;
           }
            else return false;
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
#endif
