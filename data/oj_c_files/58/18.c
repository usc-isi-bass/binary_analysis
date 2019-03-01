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
	int n,i,j,y;
	char *p,*q;
	p=q=(char *)malloc(100*sizeof(char));
	scanf("%d",&n);
	gets(p);
	for(i=0;i<n;i++)
	{
		gets(p);
		y=1;
		for(p=q,j=0;*(p+j)!='\0';j++)
		{
			if(j==0)
				if((*(p+j)<'a'||*(p+j)>'z')&&(*(p+j)<'A'||*(p+j)>'Z')&&*(p+j)!='_')
				{
					y=0;
					break;
				}
			if(j!=0)
				if((*(p+j)<'a'||*(p+j)>'z')&&(*(p+j)<'A'||*(p+j)>'Z')&&*(p+j)!='_'&&(*(p+j)<'0'||*(p+j)>'9'))
				{
					y=0;
					break;
				}
		}
		printf("%d%s",y,i==n-1?"":"\n");
	}
}
