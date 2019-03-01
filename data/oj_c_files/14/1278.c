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
   struct a
   {
   	int h;
   	int y;
   	int s;
   }b[100000],e;
   int c[100000];
   int n,i,f,j,d;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d%d%d",&b[i].h,&b[i].y,&b[i].s);
   }
   for(i=0;i<n;i++)
   {
   	c[i]=b[i].y+b[i].s;
   }
   for(j=0;j<3;j++)
   {
   	for(i=j+1;i<n;i++)
   	{
   		if(c[i]>c[j])
   		{
   			d=c[j];
   			c[j]=c[i];
   			c[i]=d;
   			e=b[j];
   			b[j]=b[i];
   			b[i]=e;
   			
   		}
   	}
   	f=b[j].h;
   	printf("%d %d\n",f,c[j]);
   }
  
return 0;
}