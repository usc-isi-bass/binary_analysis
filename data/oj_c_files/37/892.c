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
	char a[100001];
	int t,n,i,j,k,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int s[100001]={0};
		scanf("%s",a);
		n=strlen(a);
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]==a[j])
				{
					s[j]+=1;
				}
			}
		}
		for(p=0;p<n;p++)
		{
			if(s[p]==1)
			{
				printf("%c\n",a[p]);
				break;
			}
		}
		if(p==n)
		{
			printf("no\n");
		}
	}
	return 0;
}


	