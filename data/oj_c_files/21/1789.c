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
	unsigned int i,j=0,n,result[2];
	float num[300],sum=0,cha[300],aver,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
    aver=sum/n;
	for(i=0;i<n;i++)
	{
		cha[i]=(num[i]-aver)>(aver-num[i])?(num[i]-aver):(aver-num[i]);
		if(max<cha[i])
			max=cha[i];
	}
    for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			result[j]=num[i];
			j++;
		}
	}
	if(j==1)
		printf("%d",result[0]);
	else printf("%d,%d\n",(result[0]<result[1]? result[0]:result[1]),(result[0]>result[1]? result[0]:result[1]));
}