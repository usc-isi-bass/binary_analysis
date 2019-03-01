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
	char a[3000],b[300][30];
	int i,n,len,j=0,k=0,l[300];
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else 
		{
			if(a[i-1]!=' ')
			{
			  b[j][k]='\0';
			  k=0;
			}
		    if(a[i+1]!=' ')
			{
			   j++;
			}
		}
	}
	b[j][k]='\0';
    for(n=0;n<j;n++)
	{
		l[n]=strlen(b[n]);
		printf("%d,",l[n]);
	}
	l[j]=strlen(b[j]);
	printf("%d",l[j]);
	return 0;
}
