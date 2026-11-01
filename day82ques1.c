#include <stdio.h>
enum Signal {STOP, WAIT, GO};
int main()
{
    enum Signal light;
    light = STOP; printf("Stop: Red light\n");
    light = WAIT; printf("Wait: Yellow light\n");
    light = GO; printf("Go: Green light\n");
    return 0;
}