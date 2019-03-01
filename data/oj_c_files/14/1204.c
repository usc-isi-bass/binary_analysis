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
	int xuehao;
	int shuxue;
	int yuwen;
	int zongfen;
	};


int main()
{
		int n,i,e,j;
	scanf("%d", &n);

    struct student stu[100001];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d", &stu[i].xuehao,&stu[i].shuxue,&stu[i].yuwen);
		stu[i].zongfen=stu[i].shuxue+stu[i].yuwen;
	}
	for(i=1;i<4;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(stu[j].zongfen>=stu[j+1].zongfen)
			{
				stu[100000]=stu[j+1];
				stu[j+1]=stu[j];
				stu[j]=stu[100000];
			}
		}
	}
	for(i=n-1;i>n-4;i--)
	{
       printf("%d %d\n", stu[i].xuehao,stu[i].zongfen);
	}


	




	return 0;
}