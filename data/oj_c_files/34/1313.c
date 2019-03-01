#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
  Name: ????
  Author: chenminhuan?1200012757? 
*/


int n;
void  print(int n)
{
      if (n==1)          //??n==1  ???? 
      {
         printf("End");
         return;
      } 
      if (n%2)          //??n??? ???n*3+1 
      {
         printf("%d*3+1=%d\n",n,n*3+1);
         print(n*3+1);
      } else           //??n??? ???n/2 
      {
         printf("%d/2=%d\n",n,n/2);
         print(n/2);   
      }
}
int main()
{
    cin>>n;
    print(n);          //???? 
    return 0;
}