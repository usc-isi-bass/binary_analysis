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
	long l1,l2,i;
	char s[80],t[80];
	gets(s);gets(t);l1 = strlen(s);l2 = strlen(t);
   for (i=0; i<(l1+l2)/2; i++)
   { 
	   s[i]=toupper(s[i]);t[i]=toupper(t[i]);
   }
   if(strcmp(s,t)==0)printf("=\n");
   if(strcmp(s,t)>0)printf(">\n");
   if(strcmp(s,t)<0)printf("<\n");
   return 0;
}