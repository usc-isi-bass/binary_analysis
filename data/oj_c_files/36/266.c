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
	char a[100];
	char b[100];
	scanf("%s %s",a,b);
	int s,t;
	s=strlen(a);
	t=strlen(b);
	int i,j,k;
	char r;
	for(i=0;i<s;i++)
	{
		for(j=i;j<t;j++)
		{
			if(b[j]==a[i])
			{
				r=b[i];
				b[i]=b[j];
				b[j]=r;
			}
		}
	}
		k=strcmp(a,b);
		if(k==0)
			printf("YES");
		else
			printf("NO");
}