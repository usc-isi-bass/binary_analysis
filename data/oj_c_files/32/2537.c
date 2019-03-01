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
	long n;
	char str1[LENGTH+1], str2[LENGTH+1], ln[LENGTH+1];
	int a[LENGTH+1], b[LENGTH+1], len1, len2;
	long h, i, t;

	scanf("%d\n", &n);
	for (h=1;h<=n;h++)
	{
		gets(str1);
		gets(str2);
		if (h<n) gets(ln);
		len1=strlen(str1);
		len2=strlen(str2);
		for (i=0;i<=LENGTH;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for (i=0;i<len1;i++)
			a[LENGTH-i]=str1[len1-i-1]-'0';
		for (i=0;i<len2;i++)
			b[LENGTH-i]=str2[len2-i-1]-'0';
		for (i=0;i<=LENGTH;i++)
			a[i]-=b[i];
		for (i=LENGTH;i>0;i--)
		{
			if (a[i]<0)
			{
				a[i]+=10;
				a[i-1]--;
			}
		}
		t=0;
		while (a[t]==0)
			t++;
		for (i=t;i<=LENGTH;i++)
			printf("%d", a[i]);
		if (h<n) printf("\n");
	}
}