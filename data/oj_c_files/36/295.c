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
	char a[100],b[100];
	int i,j,k,m,n,sig=0;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]==a[i])
				{
					b[j]=0;
					break;
				}
				
			}
			if(j==n)
				{printf("NO");
				break;}
		}
		if(i==n)
			printf("YES");
		 
	}
	else
		printf("NO");
}

	

		
	