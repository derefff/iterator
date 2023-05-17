#include <stdlib.h>
#include <stdio.h>

#include "iterator.cpp"

int main()
{
	Iterator i(1);
	printf("\n");
	i.show_current_index();
	
	return 0;
}
