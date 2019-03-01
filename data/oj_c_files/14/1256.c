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
    int i,j,m,n,a[3][2],k;
	struct student
	{
	int num;
	int s1;
	int s2;
	int l;
	}stu[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].s1,&stu[i].s2);
		stu[i].l=stu[i].s1+stu[i].s2;
	}
	for(i=0;i<3;i++)
	{
		for(m=0,j=0;j<n;j++)
		{
			if(m<stu[j].l)
			{
				m=stu[j].l;
				k=j;
			}
		}
		a[i][0]=k;
		a[i][1]=m;
		stu[k].l=0;
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",a[i][0]+1,a[i][1]);
	}
}
