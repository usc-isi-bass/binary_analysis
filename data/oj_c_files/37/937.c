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
	int n,i,j,k,s,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		char a[100000];
		scanf("%s",a);
		len=strlen(a);
		int b[26]={0};
		for(j=0;j<len;j++)
		{
			for(k=97;k<123;k++)
			{
				if(a[j]==k)
				{
					b[k-97]++;
					break;
				}
				
			}
		}
		
		for(j=0;j<len;j++)
		{
			if(b[a[j]-97]==1)
			{
				printf("%c\n",a[j]);
				s=1;
				break;
			}
		}
		if(s==0)
		{
			printf("no\n");
		}

	}
	return 0;
}