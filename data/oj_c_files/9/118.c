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

struct bingren
{
	   char id[10];
	   int o;
}bingren[201];
void main()
{
   int n,i,j,y,m;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%s%d",bingren[i].id,&bingren[i].o);
   }
   for(i=0,j=100;i<n;i++)
   {
	   
	   if(bingren[i].o>=60)
	   {
		   bingren[j]=bingren[i];
		   j++;
	   }
   }
   y=j;
   for(j=0;j<y-1;j++)
   {
	   for(i=100;i<y-j;i++)
	   {
		   if(bingren[i].o<bingren[i+1].o)
		   {
			   bingren[200]=bingren[i];
			   bingren[i]=bingren[i+1];
			   bingren[i+1]=bingren[200];
		   }
	   }
   }
   for(i=100;i<y;i++)
   {
	   printf("%s\n",bingren[i].id);
   }
   for(i=0;i<n;i++)
   {
	   if(bingren[i].o<60)
		   printf("%s\n",bingren[i].id);
   }
}

