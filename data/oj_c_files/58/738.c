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
	char s[100][81];
	int n,i,a[81],j,k,r;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	    gets(s[i]);
	for(j=0;j<n;j++)
	{
		for(k=0;k<strlen(s[j]);k++)
			a[k]=(int)s[j][k];
		if(a[0]==95||(a[0]>96&&a[0]<123)||(a[0]>64&&a[0]<91))
		{
			for(r=0;r<strlen(s[j]);r++)
			{
				if((a[r]>96&&a[r]<123)||(a[r]>64&&a[r]<91)||(a[r]==95)||(a[r]>47&&a[r]<58))
				{
					if(r==strlen(s[j])-1)
						printf("1\n");
					else
					    continue;
				}
				else
				{
					printf("0\n");
					break;
				}
			}
		}
		else
			printf("0\n");
	}
}