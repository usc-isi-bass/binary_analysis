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


int paixu(int *x,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(*(x+j)<*(x+j+1))
			{
				temp=*(x+j);
				*(x+j)=*(x+j+1);
				*(x+j+1)=temp;
			}
		}
	return 0;
}

int main()
{
	int n,tj[1000],*p1=tj,qw[1000],*p2=qw,i,sum;
	scanf("%d",&n);
	while(n!=0){
	sum=0;
	for(i=0;i<n;i++) scanf("%d",(p1+i));
	for(i=0;i<n;i++) scanf("%d",(p2+i));
	paixu(p1,n);
	paixu(p2,n);
	int maxtj=0,mintj=n-1,maxqw=0,minqw=n-1;
	while(mintj>=maxtj)
	{
		if(*(p1+mintj)>*(p2+minqw))
		{
			sum++;
			mintj--;
			minqw--;
		}
		else if(*(p1+mintj)<*(p2+minqw))
		{
			sum--;
			mintj--;
			maxqw++;
		}
		else
		{
			if(*(p1+maxtj)>*(p2+maxqw))
			{
				sum++;
				maxtj++;
				maxqw++;
			}
			else if(*(p1+maxtj)<*(p2+maxqw))
			{
				sum--;
				mintj--;
				maxqw++;
			}
			else if(*(p1+mintj)==*(p2+maxqw))
			{
				mintj--;
				maxqw++;
			}
			else
			{
				sum--;
				mintj--;
				maxqw++;
			}
		}
	}
	printf("%d",sum*200);
	printf("\n");
	scanf("%d",&n);
	}
	return 0;
}