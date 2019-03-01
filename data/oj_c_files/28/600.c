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
	char a[2000],*p;
	gets(a);
	p=a;
	int i,j=0,n,k=0;
	n=strlen(a);
	a[n]=' ';
	a[n+1]='\0';
	while(*(p+j)!=' ')
	{
		k++;
		j++;
	}
	printf("%d",k);
	k=0;
	while(*(p+j)==' ')
		j++;
	for(i=j;i<n+1;i++)
	{
		if(*(p+i)!=' ')
			k++;
		if(*(p+i)==' ')
		{
			if(*(p+i-1)!=' ')
			{
			   printf(",%d",k);
			    k=0;
			}
			if(*(p+i-1)==' ')
				k=0;
		}
	}
	return 0;
}
		