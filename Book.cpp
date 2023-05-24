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
           // printf("%s %s \n",author, title);
           std::cout<< author<<" "<<title<<std::endl;
        }

};