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

main()
{
	char s1[50],s2[50];
	int n,i,j,a,b;
	scanf("%s %s",s1,s2);
	n=strlen(s1);
	for(i=0;s2[i]!='\0';i++)
	{
		b=i;
		a=0;
		for(j=0;j<n;j++)
		{
			if(s1[j]==s2[i])
				a++;
			i++;
		}
		if(a==n)
		{
			printf("%d",b);
			break;
		}
		else
			i=b;
	}
}