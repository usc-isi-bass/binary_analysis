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

void main()
{
	int n,i,j,t,len,b[100][26]={0};
   char a[100][10000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%s",&a[i]);
   }
   for(i=0;i<n;i++)
   {
	   t=0;
	   len=strlen(a[i]);
	   for(j=0;j<len;j++)
	   {
	     b[i][a[i][j]-48]++;
	   }
	   for(j=0;j<len;j++)
	   {
	     if(b[i][a[i][j]-48]==1)
		 {
		   printf("%c\n",a[i][j]);
		   t++;
		   break;
		 }
	   }
	   if(t==0)
	   {
		   printf("no\n");
	   }
   }
}