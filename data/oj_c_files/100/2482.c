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
	char a[400];
	gets(a);
	int l;
	int b[27]={0},c[27]={0};
	l=strlen(a);
	int i,n=0;
	for(i=0;i<l;i++)
	{
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
		{
			n=1;
			if(a[i]>='A'&&a[i]<='Z')
			{
				b[a[i]-64]++;
			}
			if(a[i]>='a'&&a[i]<='z')
			{
				c[a[i]-96]++;
			}
		}
	}
	if(n==0) printf("No");
	else
	{
		for(i=0;i<=26;i++)
		{
			if(b[i]!=0) printf("%c=%d\n",i+64,b[i]);
		}
		for(i=0;i<=26;i++)
		{
			if(c[i]!=0) printf("%c=%d\n",i+96,c[i]);
		}
	}
	return 0;
}