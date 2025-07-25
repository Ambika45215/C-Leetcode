#include <stdio.h>
int main()
{
    int x = 25;
    if (x == 30) // Add Semicolon here to see the difference in output and its power  
    x = 50;
    if (x == 25)
        x = x + 1;
    else
        x = x - 1;
    printf("%d", x);
    return 0;
}
