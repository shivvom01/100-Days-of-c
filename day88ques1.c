#include <stdio.h>
enum Colors {RED, GREEN, BLUE, YELLOW};
int main()
{
    enum Colors c;
    for(c = RED; c <= YELLOW; c++)
    {
        switch(c)
        {
            case RED: printf("RED = %d\n", c); break;
            case GREEN: printf("GREEN = %d\n", c); break;
            case BLUE: printf("BLUE = %d\n", c); break;
            case YELLOW: printf("YELLOW = %d\n", c); break;
        }
    }
    return 0;
}