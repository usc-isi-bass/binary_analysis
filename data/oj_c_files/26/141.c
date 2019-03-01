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
	int num=0,i,j;
	for(i=0;i<101;i++)
	{
		scanf("%c",&a[i]);
		num++;
		if(a[i]=='\n')
			break;
	}
	for(i=0;i<num;i++)
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i+1;j<num-1;j++)
				a[j]=a[j+1];
			num--;
			i--;
		}
	}
	for(i=0;i<num;i++)
		printf("%c",a[i]);
	return 0;
}