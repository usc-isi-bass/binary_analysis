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
	char s[1000];
	int n,i,j,k,m,count=0;
	gets(s);
	n=strlen(s);

	for(k=2;k<=n;k=k+2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<k/2;j++)
			{
				if(s[i+j]==s[i+k-j-1])
					count++;
				if(j==k/2-1 && count==k/2)
				{
					for(m=i;m<i+k;m++)
						printf("%c",s[m]);
					printf("\n");
					count=0;
				}
				else if(j==k/2-1 && count!=k/2) count=0;
			}
		}
	}
}