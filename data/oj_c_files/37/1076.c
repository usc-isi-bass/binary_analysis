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
	char a[10][10000];
	int t,i,j,k,l[10],s=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		gets(a[i]);
		l[i]=strlen(a[i]);
	}

	for(i=0;i<t;i++)
	{
		for(j=0;j<l[i];j++)
		{
			for(k=0;k<l[i];k++)
			{
				if((a[i][j]==a[i][k])&&(j!=k))
					break;
				else
					s=s+1;
			}
			if(s==l[i])
				break;
			else
				s=0;
		}
		if(s==0)
			printf("no\n");
		else
		{
			printf("%c\n",a[i][j]);
			s=0;
		}
	}
	return 0;
}