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

int judge(int j)//judge???????????????
{
	int k;
	for(k=3;k<=sqrt(j);k=k+2)
		if(j%k==0)
			break;
	if(k<=sqrt(j))
		return 1;
	else return 0;
}
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)//i???6~n??????
	{
		printf("%d=",i);
		for(j=3;j<=i/2;j=j+2)
		{
			if(judge(j)==0&&judge(i-j)==0)
			{
				printf("%d+%d\n",j,i-j);
			break;
			}
		}
	}
}