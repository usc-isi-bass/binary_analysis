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
	int stuID;
	int yuwen;
	int shuxue;
	int zongfen;
}stu[100000];
int main()
{
	int i,n,j,x,str;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].stuID,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(stu[j].zongfen>stu[j+1].zongfen||((stu[j].zongfen==stu[j+1].zongfen)&&(stu[j].stuID<stu[j+1].stuID)))
			{
				x=stu[j].zongfen;
				stu[j].zongfen=stu[j+1].zongfen;
				stu[j+1].zongfen=x;
				str=stu[j].stuID;
				stu[j].stuID=stu[j+1].stuID;
				stu[j+1].stuID=str;
			}
		}
			printf("%d %d\n",stu[n-1-i].stuID,stu[n-1-i].zongfen);
	}
	return 0;
}

