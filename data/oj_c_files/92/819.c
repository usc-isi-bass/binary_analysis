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

int compare(const void *x,const void *y)
{
	return *((int*)x)-*((int*)y);
}
main()
{
	while(1)
	{
	int n,i,k=0,sum=0,tou,wei;
	int tian[1000],qiwa[1000]; 
	scanf("%d",&n);
	if(n==0)
	break;
	for(i=0;i<n;i++)
	{
		scanf("%d",&tian[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&qiwa[i]);
	}
	tou=n-1;
	wei=n-1;
	qsort(tian,n,sizeof(int),compare);
	qsort(qiwa,n,sizeof(int),compare);
	for(i=0;i<=wei;)
	{
		if(tian[i]>qiwa[k])
		{
			sum=sum+200;
			k++;
			i++;
			continue;
		}
		if(tian[i]<qiwa[k])
		{
			sum=sum-200;
			tou--;
			i++;
			continue;
		}
		if(tian[i]==qiwa[k])
		{
			if(tian[wei]>qiwa[tou])
			{
				sum=sum+200;
				wei--;
				tou--;
				continue;
			}
			else
			{
			
			if(tian[i]==qiwa[tou])
			{
				tou--;
				i++;
				continue;
			}
			else
			{
				sum=sum-200;
				tou--;
				i++;
				continue;
			}
			}
		}
	}
	printf("%d\n",sum);
	
	
} }