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
	char a[1000],b[1000];
	int i,j,m,n;scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n) printf("NO");
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					b[j]=0;
					break;
				}
			}
			if(j==n)
			{printf("NO");
			break;}
		}
		if(i==strlen(a))
			printf("YES");
	}
	
	return 0;
}
