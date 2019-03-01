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
	double chi;
	double math;
	double total;
};
int main()
{
	struct student stu[100000];
	struct student temp;
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%lf%lf",&stu[i].num,&stu[i].chi,&stu[i].math);
		stu[i].total=stu[i].chi+stu[i].math;
	}
	for(i=0;i<3;i++)
	{
		k=i;
		for(j=i;j<n;j++)
		{
			if(stu[k].total<stu[j].total)
			{
				k=j;
			}
		}
		if(k!=i) 
		{
			temp=stu[i];
			stu[i]=stu[k];
			stu[k]=temp;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %.0lf\n",stu[i].num,stu[i].total);
	}
	
	return 0;
}

