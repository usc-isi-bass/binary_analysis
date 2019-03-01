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


int f(int x,int y);
int main()
{
    int i,a,d,m,n;
    int ad[999];
    int sd[999];
    for(i=1;i>0;i++)
    {
        scanf("%d%d\n",&ad[i],&sd[i]);
        if(ad[i]==0&&sd[i]==0)
        {
            break;
        }
        
         printf("%d\n",f(ad[i],sd[i]));
    }
    return 0;
}
    
int f(int x,int y) {
   int i;
   int k=0;
   for(i=2;i<=x;i++)
   {k=((y%i)+k)%i;}
  return k+1;
}  