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
   int a[100],bre[100];
   int i,j,k,l,n,m;
   scanf("%d",&n);
   while(n--)
   {
	   for(i=1;i<=60;i++)
	   {a[i]=1;}
	   scanf("%d",&m);
	   if(m==0) 
	   {
		   printf("60\n");
		   continue;
	   }
	   else
	   {
		   for(i=1;i<=m;i++)
			   scanf("%d",&bre[i]);
		   for(i=1;i<=m;i++)
			   bre[i]=bre[i]+3*(i-1);
		   for(i=1;i<=m;i++)
		   {
			   a[bre[i]+1]=0;
			   a[bre[i]+2]=0;
			   a[bre[i]+3]=0;
		   }
		   l=0;
		  for(i=1;i<=60;i++)
            l=l+a[i];
		  printf("%d\n",l);
	   }
   }
   return 0;
}
  

