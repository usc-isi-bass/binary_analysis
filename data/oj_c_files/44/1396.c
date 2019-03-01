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
    int n,s,i;
    for(i=0;i<6;i++)
   {
     scanf("%d",&n);
     if(n>0)
     s=f(n,0);
     else 
     { n=-n;
      s=-f(n,0);}
    printf("%d\n",s);
   }

 return 0;    
}

int f(int x,int y)
{
    y=y*10+x%10;
    if(x<10)
    return y;
    else
    f(x/10,y);
}

