/*Break: This break immediately exits the loop.
  Continue: This one skips executing the loop where condition gets satisfied but loops continues.
  Be careful this is an infinite loop with if condition 0 or 1*/
#include <stdio.h>
int main(){
 while(!0 || !1)
  {
     if(0)
      {
         printf("A");
         break;
      }
     else
      {
         printf("B");
         continue;
      }
  }
 return 0;
}
