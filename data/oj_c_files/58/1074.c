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
	int i,j,k,m,n;
	char a[100]={'\0'};
	char*p;
	scanf("%d",&n);
	for(j=0;j<=n;j++)
	{
		gets(a);
		if(j==0)
		{continue;}
		p=a;
		m=strlen(a);
		k=0;
		if(*p>='0'&&*p<='9')
		{
			printf("0\n");
		}else
		{
			for(i=0;i<m;i++)
			{
				if((*(p+i)>='0'&&*(p+i)<='9')||(*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')||(*(p+i)=='_'))
				{
					k++;
				}
			}
			if(k==m)
			{
				printf("1\n");
			}else
			{
				printf("0\n");
			}
		}
		
	}
	return 0;
}

