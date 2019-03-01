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
	int n,i;
	int diyi,dier,disan;
	diyi=0;
	dier=0;
	disan=0;
	struct student
	{
		int num;
		int yuwen;
		int shuxue;
		int sum;
	}stu[99999];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].sum>stu[diyi].sum){diyi=i;}
	}
	for(i=0;i<n;i++)
	{
		while(i!=diyi)
		{
			dier=i;
			break;
		}
		break;
	}
    for(i=0;i<n;i++)
	{
		if(i!=diyi)
		{
		if(stu[i].sum>stu[dier].sum){dier=i;}
		}
	}
	for(i=0;i<n;i++)
	{
		while(i!=diyi && i!=dier)
		{
			disan=i;
			break;
		}
		break;
	}
	for(i=0;i<n;i++)
	{
		if(i!=diyi && i!=dier)
		{
		if(stu[i].sum>stu[disan].sum){disan=i;}
		}
	}
	printf("%d %d\n",diyi+1,stu[diyi].sum);
	printf("%d %d\n",dier+1,stu[dier].sum);
	printf("%d %d\n",disan+1,stu[disan].sum);
}	
