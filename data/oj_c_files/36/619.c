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
	int n,i,j,p=0;
	char a[50],b[50];
	scanf("%s %s",a,b);
	n=strlen(a);
	if(n!=strlen(b))printf("NO");
	else
	{
		for(i=0;i<n;i++)
		{
			p=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					p=1;
					b[j]=2;
					break;
				}
			}
			if(p==0)
			{
				printf("NO");
				p=3;
				break;
			}
		}
		if(p!=3)
			printf("YES");
	}
}