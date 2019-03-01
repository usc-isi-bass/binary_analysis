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
	int id;
	int chinese;
	int math;
	int total;
};
int main()
{
	struct student stu[100000];
	struct student max[3]={0,0,0,0,0,0,0,0,0,0,0,0};
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d\n",&stu[i].id,&stu[i].chinese,&stu[i].math);
		stu[i].total = stu[i].chinese + stu[i].math;
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].total > max[1].total)
		{
			max[1]=stu[i];
		}
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].total > max[2].total && stu[i].total <= max[1].total && stu[i].id!=max[1].id)
		{
			max[2]=stu[i];
		}
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].total > max[3].total && stu[i].total <= max[2].total && stu[i].id!=max[2].id && stu[i].id!=max[1].id)
		{
			max[3]=stu[i];
		}
	}
	for (i=1;i<4;i++)
	{
		printf("%d %d\n",max[i].id,max[i].total);
	}
	return 0;
}