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
	int i,n=0,m=0,a[300],k=-1;
	char string[2000];
	gets(string);
    char c;
	for(i=0;(c=string[i])!='\0';i++)
	{   
		n=n+1;
		if(c==' ') 
		{
			a[m]=i-k-1;
			k=i;
			m++;
		}
	}
	a[m]=n-m;
	for(i=0;i<m;i++)
	{
		a[m]=a[m]-a[i];
	}
	for(i=0;i<m;i++)
	{
		if(a[i]!=0)  printf("%d,",a[i]);
	}
	printf("%d\n",a[m]);
}
