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


int sushu(int a);
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=3;i<n-1;i++)
      { if(sushu(i)==1&&sushu(i+2)==1)
          {printf("%d %d\n",i,i+2);
           c++;}
       }
    if(c==0) printf("empty") ;  
     
}

int sushu(int a)
  { int i,b=0;
     for(i=2;i<=sqrt(a);i++)
     {    if(a%i==0) b++;
     }
       if(b==0) return 1;
       else return 0;    
  }
    
