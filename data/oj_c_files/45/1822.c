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
	char m[50]={'\n'},n[50]={'\n'};
	int i=0,j=0,h=0,k=0;
	scanf("%s%s",m,n);
	for(i=0;i<strlen(n);i++)
	{
		if(m[0]==n[i])
		{
			k=i;h=i;
			for(j=0;j<strlen(m);j++,k++)
			{
				if(m[j]!=n[k])
				{
					break;
				}
			}
			if(j==strlen(m))
			{
				printf("%d",h);
				break;
			}
		}
	}
    return 0;
}
