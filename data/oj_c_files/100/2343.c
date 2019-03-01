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
   int m,n,i,j,k,sign=0;
   char tt[301];
   
   scanf("%s",tt);
   for(n=65;n<=90;n++)
   {
	   int p=0;
       for(i=0;tt[i]!='\0';i++)
	   {
          if(tt[i]==n)  p++; 
	   }
	   if(p!=0)
	   {
		   printf("%c=%d\n",n,p); sign++;
	   }
   }
   for(n=97;n<=122;n++)
   {
	   int p=0;
       for(i=0;tt[i]!='\0';i++)
	   {
          if(tt[i]==n)  p++; 
	   }
	   if(p!=0)
	   {
		   printf("%c=%d\n",n,p); sign++;
	   }
   }
   if(sign==0) printf("No\n");
}