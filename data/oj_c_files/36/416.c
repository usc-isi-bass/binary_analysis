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
	char c1[100],c2[100];
	int i,j,a,b,k=0;
	scanf("%s %s",c1,c2);
	a=strlen(c1);
	b=strlen(c2);
	if(a!=b) printf("NO\n");
	else
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(c1[i]==c2[j])
					k++;
			}
		}
		for(i=0;i<a;i++)
		{
			for(j=i+1;j<a;j++)
			{
				if(c1[i]==c1[j])
					k=k-2;
			}
		}
		if(k==a) printf("YES\n");
		else printf("NO\n");
	}
}