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
	int n;
	int a,b;
	int s=0;
	int e=0;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			s+=0;
			e+=0;
		}
		else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
		{
			s+=1;
		}
		else
		{
			e+=1;
		}
	}
	if(s==e)
	{
		printf("Tie\n");
	}
	else if(s>e)
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
	return 0;
}