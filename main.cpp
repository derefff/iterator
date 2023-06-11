#include <stdio.h>
#include<iostream>

#include "iterator.cpp"
#include "Book.cpp"
#include "BookCollection.cpp"

using namespace std;
int main()
{
	BookCollection BookContainer;
	Book b1 =Book("Henryk Sienkiewicz", "Quo Vadis");
	Book b2 =Book("Adam Mickiewicz", "Vadis Quo");
	Book b3 =Book("Henryk Sienkiewicz", "Potop");
	Book b4 =Book("J.K. Rowling", "Harry Potter i Kamień Filozoficzny");
	Book b5 =Book("George Orwell", "Rok 1984");

	BookContainer.addItem(b1);
	BookContainer.addItem(b2);
	BookContainer.addItem(b3);
	BookContainer.addItem(b4);
	BookContainer.addItem(b5);

	while(BookContainer.hasNext())
	{
		Book* b = BookContainer.next();
		b->show();
	}
	return 0;
}
