//here without using + or ++ we want to print 1 2 3 4 5 using for loop which is not possible. But we think deeper nothing is impossible. We can achieve this using "BIT-WISE NOT OPERATOR". Sounds absurd right! I felt the same when i first saw this code. But when I searched online , I understood how and why it works in that way. Here is what I understood ..
// So our integers (signed, short and long) are stored in two's complement in C , not only C but also Python, C++,Java, JavaScript. 
// When we invert(Not operation bitwise) a number(i) ,we get two's comlement of (i+1) so that is we get -(i+1).See in the loop i=-~i which is same as i+=i / i=i+1 / i++. This way we can print 12345 without using + or ++ 
#include<stdio.h>
int main(){
    int i=1;
    for(;i<=5;){
        printf("%d\n",i);
        i=-~i;
    }
    return 0;
}