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
   int s,k,a,b,c,d;
   scanf("%d",&s);
   a=(s-s%1000)/1000;
   b=(s%1000-s%100)/100;
   c=(s%100-s%10)/10;
   d=s%10;
   k=d*1000+c*100+b*10+a;
   if(a==0)
	   if(b==0)
		   if(c==0)
			   printf("%d",d);
		   else printf("%d%d",d,c);
	   else printf("%d%d%d",d,c,b); 
   else printf("%d%d%d%d",d,c,b,a);

   
   
   



   return 0;

}