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
	char xuehao[100];
	int yuwen;
	int shuxue;
	int sum;
};

int main()
{
	int n,i,j,l,m;
    struct student stu[100000];
	struct student temp;

	

	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%s",stu[i].xuehao);
		scanf("%d %d",&stu[i].yuwen,&stu[i].shuxue);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}

	for(j=1;j<4;j++)
	{
		for(m=0;m<n-j;m++)
		{
			if(stu[m].sum>=stu[m+1].sum)
			{
				temp=stu[m];
				stu[m]=stu[m+1];
				stu[m+1]=temp;
			}
		}
	}




	for(l=n-1;l>n-4;l--)
		printf("%s %d\n",stu[l].xuehao,stu[l].sum);

	return 0;
}
