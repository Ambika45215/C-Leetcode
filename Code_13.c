// Swapping numbers without uisng temporary variable or third variable 
#include<stdio.h>
int main(){
    int a=5,b=3;
    a^=b;  // a= a^b    here a becomes a xor b
    b^=a;  // b= (a^b)^b   in Xor operation same values becomes 0 and "b" becomes "a"   
    a^=b;  // a= (a^b) ^a   same way here "a" becomes "b"
    printf("a=%d\n" "b=%d\n",a,b);
    return 0;
}