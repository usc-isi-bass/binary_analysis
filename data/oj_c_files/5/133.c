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
    char a[501],b[501];
	int i,k,l=0;
	k=0;
	double d;
	scanf("%lf",&d);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b))
	{
		k=1;
		printf("error");
	}
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
				l++;
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
			{
				k=1;
				printf("error");
				break;
			}
		}
	}
	if(k==0)
	{
		if((1.0*l/strlen(a))>=d)
			printf("yes");
		else
			printf("no");
	}
	return 0;
}
