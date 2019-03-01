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
	int n,i,count1=0,count2=0,num=0,j;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				count1++;
		}
		for(j=2;j<i+2;j++)
		{
			if((i+2)%j==0)
				count2++;
		}
		if(count1==0&&count2==0)
		{
		printf("%d %d\n",i,(i+2));
		num=num+1;
		}
		count1=0;
		count2=0;
	}
	if(num==0)
		printf("empty");
	return 0;
}