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
	int n,i,b,j,d=1,l[100];
	char a[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		l[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=(int)a[i][0];
		if(a[i][0]=='_'||(b>=65&&b<=90)||(b>=97&&b<=122))
		{
			for(j=1;j<l[i];j++)
			{
				b=(int)a[i][j];
				if(a[i][j]=='_'||(b>=65&&b<=90)||(b>=97&&b<=122)||(b>=48&&b<=57))
				{
					d=d+1;
				}
				else
				{
					printf("no\n");
					d=d-1;
					break;
				}			
			}			
			if(d==l[i])
			{
				printf("yes\n");
			}
		}
		else
		{
			printf("no\n");
		}
		d=1;
	}
	return 0;
}
