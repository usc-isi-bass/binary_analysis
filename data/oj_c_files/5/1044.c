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

int main ()
{
	char a[501],b[501];
	int i,m;
	double n;
	m=0;
	scanf("%lf",&n);
	scanf("%s",a);
	scanf("%s",b);
	int p=strlen(a);
	int q=strlen(b);
	if(p==q)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
			{
				printf("error");
				return 0;
			}
			else
			{
				if((a[i])==(b[i]))
					m++;
			}
		}
		if((1.0*m/(p*1.0))>=n)
		{
			printf("yes");
		}
		else{printf("no");}
	}
	else
	{
		printf("error");
	}
	return 0;
}
