#include <stdio.h>
enum Number {ZERO, ONE, TWO, THREE};
int main()
{
    enum Number n = TWO;
    printf("Enum value as integer = %d\n", n);
    n = THREE;
    printf("After assigning THREE, value = %d", n);
    return 0;
}