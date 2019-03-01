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
	char a[30];
	int n,i,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
		j=0;k=0;
		while(a[j]!=0)
		{
			if(j==0&&(a[j]!='_')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z'))
			{
				k=1;
				break;
			}
			if(j!=0&&(a[j]!='_')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z')&&(a[j]<'0'||a[j]>'9'))
			{
				k=1;
				break;
			}
			j++;
		}
		if(k)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}