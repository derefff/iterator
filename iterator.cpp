#include <stdlib.h>
#include <stdio.h>

class Iterator
{
private:
    int current_index;
    int previous_index;
    int next_index;

    int go_next_index()
    {
        return current_index++;
    }

    int go_previous_index()
    {
        return current_index--;
    }
public:

    Iterator(int ci)
    {
        current_index = ci;
        printf("iterator construct creation");
    }

    void show_current_index(){
        printf("%d", current_index);
    }

};