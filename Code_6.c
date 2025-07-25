#include <stdio.h>
int main()
{
    // Post - Increment / Decrement
    // Here "x" and "u" gets new value but "y" and "v" gets old value of "x" and "u".
    // When we say x++, we mean “take the current value of x (before increment)” and use it in the expression.
    // The actual increment happens immediately after the value is used, not before the entire expression finishes.
    int x = 3, y, u = 3, v;
    y = x++;
    v = u--;
    printf("POST-INCREMENT/DECREMENT\n" "%d,%d\n" "%d,%d\n", x,y,u,v);

    // Pre- Increment / Decrement
    // Quiet opposite to post-increment/decrement here both "a" and "b" will have new / updated values.
    // Here we can use incremented/decremented value of "a" in the expression unlike post. 
    int a = 3, b,c=3,d;
    b = ++a;
    d=--c;
    printf("PRE-INCREMENT/DECREMENT\n" "%d,%d\n" "%d,%d\n", a,b,c,d);
    return 0;
}