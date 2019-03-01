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
	int n,i,a,b;
   char s[100];
   char s2[100]={'\0'};
   char *p,*q;
   p=s;
   q=s2;
   gets(s);
   n=strlen(s);
   for(i=0;i<n-1;i++)
   {
	   a=(*(p+i))+(*(p+i+1));
	  (*(q+i))=a;
   }
   b=(*(p+n-1))+(*(p+0));
   (*(q+n-1))=b;
   for(i=0;i<n;i++)
   {
	   printf("%c",*(q+i));
   }
}

