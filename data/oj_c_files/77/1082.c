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
	void print(char *x,int *y,int z);
	char s[100],*p;
	int a[100],i,n,*q;

	scanf("%s",s);
	p=s;
	n=strlen(s);
	for(i=0;s[i];i++)
		a[i]=i+1;
	q=&a[0];

	print(p,q,n);
}

void print(char *x,int *y,int z)
{
	int i,j,k;
	for(k=0;k<z/2;k++)
	{
    	for(i=0;*(x+i);i++)
		{
	    	if(*(x+i)!=*(x+i+1))break;
		}
		printf("%d %d\n",*(y+i)-1,*(y+i+1)-1);
		
		for(j=i+2;*(x+j);j++)
		{
            *(x+j-2)=*(x+j);
		   	*(y+j-2)=*(y+j);
		}
	}
}
 