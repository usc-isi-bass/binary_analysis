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
	char name[21],a,b;
	int score,c,e,scholar;
};
struct student stu[100],temp;
void main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score,&stu[i].c,&stu[i].a,&stu[i].b,&stu[i].e);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%s %d %d %c %c %d\n",stu[i].name,stu[i].score,stu[i].c,stu[i].a,stu[i].b,stu[i].e);
	}*/

	for(i=0;i<n;i++)
	{
		stu[i].scholar=0;
		if(stu[i].c>80&&stu[i].a=='Y')
		{
			stu[i].scholar+=850;
		}
		if(stu[i].score>85&&stu[i].b=='Y')
		{
			stu[i].scholar+=1000;
		}
		if(stu[i].score>90)
		{
			stu[i].scholar+=2000;
		}
		if(stu[i].score>85&&stu[i].c>80)
		{
			stu[i].scholar+=4000;
		}
		if(stu[i].score>80&&stu[i].e>=1)
		{
			stu[i].scholar+=8000;
		}
	}
	for(j=1;j<n;j++)
	{
		if(stu[0].scholar<stu[j].scholar)
		{
			temp=stu[0];
			stu[0]=stu[j];
			stu[j]=temp;
		}
	}
	for(j=0;j<n;j++)
		k+=stu[j].scholar;
	printf("\n%s\n%d\n%d",stu[0].name,stu[0].scholar,k);
}
