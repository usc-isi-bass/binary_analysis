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
	int n,a[100000],i,j,b[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
         b[i]=1;
	          a[i]=0;
    }
	while(1)
	{
         scanf("%d %d",&i,&j);
         if(i==0&&j==0) break;
         else
         {
              a[j]++;
              b[i]=0;
         }
    }
    for(i=0;i<n;i++)
    {
         if(b[i]==1)
         {
              if(a[i]==n-1) 
              {
                       printf("%d",i);
                       break;
              }
         }
    }
    if(i==n) printf("NOT FOUND");               
}

