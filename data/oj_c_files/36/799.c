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
	char a[500],b[500],c[500],d[1],e[1],f[1];
	int i,j,m=0;
	gets(a);
	for(i=0;a[i]!=32;i++)
	{
		b[i]=a[i];
		b[i+1]='\0';
	}
	for(i=strlen(a)-1;a[i]!=32;i--)
		c[i-strlen(b)-1]=a[i];
	c[strlen(a)-strlen(b)-1]='\0';
	if(strlen(b)!=strlen(c))
		printf("NO");
	else
	{
		for(i=0;i<strlen(b);i++)
		{
			for(j=0;j<strlen(b)-1;j++)
			{
				if(b[j]<b[j+1])
				{
					d[0]=b[j];
			 	    b[j]=b[j+1];
				    b[j+1]=d[0];
				}
			}
		}
		for(i=0;i<strlen(c);i++)
		{
			for(j=0;j<strlen(c)-1;j++)
			{
				if(c[j]<c[j+1])
				{
					d[0]=c[j];
			 	    c[j]=c[j+1];
				    c[j+1]=d[0];
				}
			}
		}
		for(i=0;i<strlen(c);i++)
		{
			if(b[i]==c[i])
				m++;
		}
		if(m==strlen(c))
			printf("YES");
		else
			printf("NO");
	}
}