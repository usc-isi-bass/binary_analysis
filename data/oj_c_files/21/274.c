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

struct number
{
	unsigned int shu;
	double cha;
}num[300];

void main()
{
	int n,i,j;
	unsigned int sum=0;
	double av;
	struct number t;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%u",&num[i].shu);
		sum+=num[i].shu;
	}
	av=((double)sum)/n;

	for(i=0;i<n;i++)
	{
		if(num[i].shu>av)
		num[i].cha=num[i].shu-av;
		else
			num[i].cha=av-num[i].shu;
	}
    
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(num[j].cha<num[j+1].cha)
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}

	printf("%d",num[0].shu);
	for(i=1;num[i].cha==num[0].cha;i++)
		printf(",%d",num[i].shu);

}