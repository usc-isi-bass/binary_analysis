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
	char a[101];
	char b[101][101];
	int i;
	int j;
	int k;
	int t;
	gets(a);
    for(i=0,j=0,k=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
			if(a[i+1]==' ')
			{
				b[j][k]='\0';
				j++;
			    k=0;
			}
			else
			{
				if(a[i+1]=='\0')
				{
			     	b[j][k]='\0';
				    j++;
			        k=0;
				}
			}
		}
            
	}
	for(t=j-1;t>=0;t--)
	{
		printf("%s",b[t]);
		if(t!=0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
