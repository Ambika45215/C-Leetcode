// Both ways the answer should be same 12,4 but in 1st way my compiler is giving 13,4 it is because "Undefined Behavior in C" (because we are modifying the same variable "a" more than once). 
// But the second way gives us the correct answer  

#include<stdio.h>
int main(){
    // Way 1
    int a=3;
    int b=++a + a++ + --a;
    printf("%d,%d\n",b,a);
    // Way 2
    int c = 3;
    int x = ++c;   
    int y = c++;   
    int z = --c;   
    int d = x + y + z;  
    printf("%d,%d",d,c);
    return 0;
}