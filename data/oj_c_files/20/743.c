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
	char c[10],s[4];
	int k,x;
	char p;
    while(scanf("%s %s",c,s)!=EOF)
	{
	   for(k=0,p='0';k<10&&(c[k])!='\0';k++)
	   {
   	       if(p<c[k])
		   {
	     		p=c[k];
	  			x=k;
		   }
	   }
	   for(k=0;k<=x;k++)
	   {
		   printf("%c",c[k]);
	   }
	   for(k=0;k<4&&(s[k]!='\0');k++)
	   {
		   printf("%c",s[k]);
	   }
	   for(k=x+1;k<10&&(c[k]!='\0');k++)
	   {
		   printf("%c",c[k]);
	   }
	   printf("\n");
	}
}