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
	 char *p,*q;
	p=(char *)malloc(sizeof(char)*101);
	q=(char *)malloc(sizeof(char)*101);
	gets(p);
	int i,n=strlen(p);
	for(i=0;i<n;i++)
	{
		if(i==n-1) *(q+i)=*(p+i)+*p;
		else *(q+i)=*(p+i)+*(p+i+1);
 
	}
 
//	*(q+n)='\0';
	puts(q);
}
