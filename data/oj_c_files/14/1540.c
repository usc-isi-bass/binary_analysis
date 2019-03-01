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

struct student
{
	int num;
	int chinese;
	int math;
	int sum;
};
void main()
{
	int n,i,j;
	struct student stu[100000];
	struct student stud;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
		stu[i].sum=stu[i].chinese+stu[i].math;
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(stu[i].sum<stu[j].sum)
			{
				stud=stu[i];
				stu[i]=stu[j];
				stu[j]=stud;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",stu[i].num,stu[i].sum);
	}
}
