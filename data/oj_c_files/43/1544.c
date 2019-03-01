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

int f(int x)
{ int c=0;int i; 
  for(i=1;i<=(sqrt(x)+1);i++)
  {if(x%i==0) c++  ;}
    if(c==1)
  return 1;
  else return 0;
    
    
    
}
int main() 
{   int m;
   scanf("%d",&m);
   int c=3;
   for(;c<=m/2;c=c+2)
   {  int d;
     d=m-c;
     if(f(d)==1&&f(c)==1) printf("%d %d\n",c,d);
    
}
    getchar();
    getchar();
}
    