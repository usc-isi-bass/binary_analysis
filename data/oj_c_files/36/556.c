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
	char s1[100],s2[100],m;
	int a,l,i,j,k;
	scanf("%s%s",s1,s2);
	l=strlen(s1);
	if(l!=strlen(s2))printf("NO");
	else
	{
		for(i=0;i<=l-1;i++)
		{
			for(j=i;j<=l-1;j++)
			{
				if(s1[i]==s2[j])
				{
					m=s2[i];
					s2[i]=s2[j];
					s2[j]=m;
				}
			}
				if(s1[i]!=s2[i])
				{
					printf("NO");
					break;
				}
		}
		if(i==l)printf("YES");
	}
}