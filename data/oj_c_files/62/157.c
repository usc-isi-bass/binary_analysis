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
	char a[100],b[100],i,j,n,m;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]!=' ')
				{
					break;
				}
				a[j]='>';
			}
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!='>')
		{
			b[j]=a[i];
			j++;
		}
	}
	m=strlen(b);
	for(i=0;i<j;i++)
	{
		printf("%c",b[i]);
	}
		




 
 
	return 0;
}