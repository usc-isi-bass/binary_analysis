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
	char a[999],d[999][999];
	gets(a);
	int i,j,k=0;
	int kk;
	for(i=0;i<strlen(a);i++)
	{
		kk=0;
		for(j=i;a[j]!=' ';j++)
		{
			kk=1;
			d[k][j-i]=a[j];
			d[k][j-i+1]='\0';
			if(a[j]=='\0')
			{
				break;
			}
		}
		i=j;
		if(kk==1)
		{
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%d,",strlen(d[i]));
	}
	printf("%d",strlen(d[k-1]));
	return 0;
}