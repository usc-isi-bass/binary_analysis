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
	int n,i,m,c,f;
	
	char str[20],substr[10],de[20],max;
	char *p,*q,*t;
	while (scanf("%s%s",str,substr)!=EOF)
	{
		n=strlen(str);
		m=strlen(substr);
		max=0;
		for(p=str;p<(str+n);p++)
		   if(*p>max)
		   {
		   max=*p;
		   t=p;
		   }
		//t=&max;
		for(p=str,i=0;p<(t+1);p++)
		  de[i++]=*p;
		for(c=i,q=substr;q<(substr+m);q++)
		  de[c++]=*q;
		for(p=(t+1),f=c;p<(str+n);p++)
		  de[f++]=*p;
		for(q=de;q<(f+de);q++)
		printf("%c",*q);
		printf("\n");
	}
}