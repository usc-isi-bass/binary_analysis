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
	int length,a;
	int x[300]={0},y[300]={0};
	int i,j;
	char p[300],q[300];
	scanf("%s%s",p,q);
	length=strlen(p);
	a=strlen(q);
	if(a!=length)
	{
		printf("NO");
		return 0;
	}
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if(p[i]==q[j]&&y[j]==0)
			{
				y[j]=1;
				x[i]=1;
				break;
			}
		}
		if(x[i]==0)
		{
			printf("NO");
			break;
		}
	}
	int c=0;
	for(i=0;i<length;i++)
		if(!x[i])
			c++;
	if(c==0)
		printf("YES");
	return 0;
}
		
