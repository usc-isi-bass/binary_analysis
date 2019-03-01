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
	char str[6000];
	int a[300];
	int i,j,num;
	gets(str);
	for (j=0,i=1,num=1;str[i]!='\0';i++)
	{
		if (str[i]!=' ')
		{
			if (str[i-1]==' ')
			{
				a[j]=num;
				num=1;
				j++;
			}
			else
				num++;
		}
	}
	for (i=0;i<j;i++)
		printf("%d,",a[i]);
	printf("%d",num);
	return 0;
}