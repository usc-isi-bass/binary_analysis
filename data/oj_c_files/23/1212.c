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
	char str[100];
	gets(str);
	int l,i,j,m;
	l=strlen(str);
	int a[50];
	j=0;
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			a[j]=i;
			j=j+1;
		}
	}
	if(j!=0)
	{
		for(i=(a[j-1]+1);i<l;i++)
	        printf("%c",str[i]);
	    printf(" ");
	    for(m=2;m<=j;m++)
		{ 
		    for(i=(a[j-m]+1);i<=(a[j-m+1]-1);i++)
			    printf("%c",str[i]);
		    printf(" ");
		}
	    for(i=0;i<a[0];i++)
		    printf("%c",str[i]);
	}
	else
		printf("%s",str);
return 0;
}