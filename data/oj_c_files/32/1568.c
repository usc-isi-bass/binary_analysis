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
	int times,i,j,lena,lenb;
	char a[1000],b[1000],c[2];
	scanf("%d\n",&times);
	for(j = 0;j<times;j++)
	{
		gets(a);
		gets(b);
		gets(c);
		lena = strlen(a);
		lenb = strlen(b);
		for(i = 1;i<=lenb;i++)
			a[lena-i] -= b[lenb-i]-48;
		for(i = lena-1;i>0;i--)
		{
			if(a[i]<'0')
			{
				a[i] += 10;
				a[i-1]--;
			}
		}
		printf("%s\n",a);
	}
}