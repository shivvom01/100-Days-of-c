#include <stdio.h>
enum Status {SUCCESS, FAILURE, TIMEOUT};
int main()
{
    enum Status status;
    status = SUCCESS; printf("SUCCESS: Operation completed\n");
    status = FAILURE; printf("FAILURE: Operation failed\n");
    status = TIMEOUT; printf("TIMEOUT: Time limit exceeded\n");
    return 0;
}