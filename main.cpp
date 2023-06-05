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

	BookContainer.addItem(b1);
	BookContainer.addItem(b2);
	BookContainer.addItem(b3);

	cout<<BookContainer.hasNext();

	while(BookContainer.hasNext())
	{
		Book* b = BookContainer.next();

		b->show();
	}
	return 0;
}
