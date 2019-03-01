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
   char a[100][100],b[25],c[25],d;
   int m,n,p[25],q,i,j;
   
   i=0;
   do
   {
	   scanf("%s",&a[i]);
       i++;    
   }while(getchar()!='\n');
   scanf("%s",&b);
   scanf("%s",&c);
   for (j=0;j<i;j++)
   {
	   p[j]=1;   
	   if (strcmp(a[j],b)==0)
	   {
		   p[j]=0;
	   }
   }
   for (j=0;j<i;j++)
   {
	   if (j!=0)
	   {
		   printf(" ");
	   }
	   if (p[j]!=0)
	   {
		   printf("%s",a[j]);
	   }
	   else printf("%s",c);
   }
}