//scanf returns integer. This integer is the number of inputs scanf function successfully read.
// what happens if we give format specifier %f or %c ? 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter values a and b:");
    int x=scanf("%d %d",&a,&b);
    printf("a and b values: %d,%d\n",a,b);
    printf("%d\n",x);
    printf("%f\n",x); // gives out some float value.
    printf("%c\n",x); // gives the ASCII value of the number scanf returns.
    return 0;
}