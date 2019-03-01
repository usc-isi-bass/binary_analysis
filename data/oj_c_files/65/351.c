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

int main()
{
    int a=0,b=0,j,k,n;
    scanf("%d",&n);
    while(n>0){
    scanf("%d%d",&j,&k);
          if(j==k)
          {
                  a++;
                  b++;
                  } 
          else{
               if((j==0&&k==1)||(j==1&&k==2)||(j==2&&k==0))
               a++;
               else
               b++;
               }
               n--;
    }
    if(a>b)
    printf("A");
    if(a<b)
    printf("B");
    if(a==b)
    printf("Tie");
}