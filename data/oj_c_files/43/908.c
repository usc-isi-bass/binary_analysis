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
 int m,a,b,i,j,mult;
 scanf("%d",&m);
 a=2;
 while(a<=(m+1)/2)
 {
	 mult=1,i=2;
		 while(i<a)
		 {
			 mult=mult&&(a%i);
			 i++;
		 }
		 if(mult!=0)
		 {
			 b=m-a,mult=1,i=2;
			 while(i<b)
			 {
				 mult=mult&&(b%i);
				 i++;
			 }
			 if(mult!=0)
			 {
				 printf("%d %d\n",a,b);
			 }
		 }
	a++;
 }
}