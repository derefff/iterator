#ifndef BOOK_H
#define BOOK_H

#include<string>
#include<stdlib.h>
#include<iostream>

class Book
{
    private:
    std::string author;
    std::string title;

    public:
        Book(std::string a, std::string t): author(a),title(t)
        {
        }

        void show(){
           std::cout<< author<<" "<<title<<std::endl;
        }



};
#endif BOOK_H