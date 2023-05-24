#include <stdlib.h>
#include <stdio.h>

#include "Book.cpp"
#include "iterator.cpp"

int main()
{
	Book b =Book("Henryk Sienkiewicz", "Quo Vadis");
	b.show();
	return 0;
}
