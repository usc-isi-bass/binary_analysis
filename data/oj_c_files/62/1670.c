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
	char a[256];
	int i=0,j,k=0;
	int n=0;
	int count=0;
	int m;
	int ax=0;
	gets(a);
	m=strlen(a);
	while(a[n]!=0)
	{
		if(a[n]!=' ')
		{
			printf("%c", a[n]);
		}
		if(a[n]==' ')
		{
			for(i=n;i<m;i++)
			{
				if(a[i]==' ')
				{
					count++;
				}
				if(a[i]!=' ')
				{
					break;
				}
			}
			printf(" ");
			n+=count-1;
			count=0;
		}
		n++;
	}
}