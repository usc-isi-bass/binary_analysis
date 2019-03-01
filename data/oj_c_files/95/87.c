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
  char s1[80],s2[80],r1[80],r2[80];
  int n,i,c;
    gets(s1);gets(s2);
	int a=strlen(s1),b=strlen(s2);
	if(a>b)c=b;else c=a;
	for(i=0;i<c;i++){
		r1[i]=toupper(s1[i]);
		r2[i]=toupper(s2[i]);} 
	    r1[i]=r2[i]='\0';
     n=strcmp(r1,r2);
	  if(n==0)
	  printf("=");
	  else if(n<0)
		  printf("<");
	   else 
		  printf(">");
   return 0;
}

