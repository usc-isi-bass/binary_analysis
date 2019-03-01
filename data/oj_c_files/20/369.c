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

main()
{
  char d,a[11],b[4],c[14];
  int n,i,f;
  while(scanf("%s %s",a,b)!=EOF)
  {
	 n=strlen(a);
     d=a[0];
	 f=0;
     for(i=0;i<n;i++)
	 { if(a[i]>d) 
	  {
	    d=a[i];
        f=i;
	 }
	 }
    c[0]='\0';
	strncat(c,a,f+1);
	strcat(c,b);
	strcat(c,a+f+1);
	puts(c);
  }
}