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
	int i;int n;char a[100];
	n=0;
	while(scanf("%s",a)!=EOF)
	{
	    char * p;
	     if(n==0)
		 {
		     for(p=a,i=0;*p!='\0';p++,i++);
		     printf("%d",i);
	       	n++;
		 }
     	else
		{
	    	for(p=a,i=0;*p!='\0';p++,i++);
		    printf(",%d",i);
		}
	}
}
