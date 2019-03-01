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
	char *a;
	int i,j,k,m,n,t;
	a=(char *)malloc(1000*sizeof(char));
	gets(a);
	n=strlen(a);
	for(i=n-1;i>-1;i--)
		*(a+i+1)=*(a+i);
	*(a+n+1)=' ';
	*(a+n+2)='\0';
	*a=' ';
	for(i=n;i>=0;i--)
	{
		if(*(a+i)==' ')
		{
			for(j=i+1;*(a+j)!=' ';j++)
				printf("%c",*(a+j));
			if(i!=0)
				printf(" ");
		}
	}
}