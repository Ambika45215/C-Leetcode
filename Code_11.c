//puts function returns "Non-negative value on success" and "EOF" on failure.
#include <stdio.h>
#include <string.h>
int main()
{
    int s = puts("hello world!");
    printf("%d\n", s);
    
    if (s >= 0)
        printf("success");
    else
        printf("Fail");
   
    return 0;
}