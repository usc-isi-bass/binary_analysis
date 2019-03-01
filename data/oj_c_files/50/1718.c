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
int n;
scanf("%d",&n);
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j;
int k;
for(i=1;i<=12;i++)
 {
    int days=0;
	for(j=i-1;j>=0;j--)
   {
	days=days+month[j];
   }
	days+=13;
   k=n-1+days%7;
   if(k==0)
   	{
   	  k=7;
    }
    else if(k>7)
    {
    	k=k-7;
    }
     if(k==5)
	{
       printf("%d\n",i);
    }
   }
return 0;
}

