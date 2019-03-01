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
	int n;
	scanf("%d",&n);
	struct student
	{
		int num;
		int score_1;
		int score_2;
		int sum;
	};
	struct student stu[n];
	int i,j,t;
	for(i=0;i<n;i++)
	{
	    scanf("%d %d %d",&stu[i].num,&stu[i].score_1,&stu[i].score_2);
	    stu[i].sum=stu[i].score_1+stu[i].score_2;
	}
	for(j=0;j<=2;j++)
	{
		for(i=n-1;i>0+j;i--)
		if(stu[i].sum>stu[i-1].sum)
		{
		    t=stu[i].sum,stu[i].sum=stu[i-1].sum,stu[i-1].sum=t;
			t=stu[i].num,stu[i].num=stu[i-1].num,stu[i-1].num=t;
		}
	}
	for(i=0;i<=2;i++)
	printf("%d %d\n",stu[i].num,stu[i].sum);
}