#include<stdio.h>
int main(){
    int x=2;
    //in c language we know that any non-zero value represents true and zero represents false.
    //check my changing the value of x in 'if' , when x=0 and when x=1,2,3,-1,-2,and so on...
    /*if the operator is '==' in 'if' then see yourself , single = indicates assigning and == inidcates check whether the value given to variable is right or not*/
    if(x==1){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
    return 0;
}