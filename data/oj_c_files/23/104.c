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
    char string[100];
	int i,k=0,j=0,n=0,a[100]={0};
    gets(string);
	for(i=0;i<100;i++)
	{
		if(string[i]!='\0')n++;
	else break;
	}
	for(i=n-1;i>=0;i--)
	{
		if(string[i]!=' ')a[k]++;
	    else k++;
	}

	
	for(j=0;j<k;j++)
	{
		for(i=n-a[j];i<n;i++)
		{printf("%c",string[i]);}
	    n=n-a[j]-1;
		printf(" ");
	}
	for(i=n-a[j];i<n;i++)
		{printf("%c",string[i]);}
		 
	
}