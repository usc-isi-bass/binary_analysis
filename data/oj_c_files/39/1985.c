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
	int i,n,total=0;

	struct student
	{
		char name[21];
		int FinalScore;
		int ClassScore;
		char u;
		char w;
		int a;
		int money;
	}stu,max;
	scanf("%d",&n);
	max.money=-1;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu.name,&stu.FinalScore,
		&stu.ClassScore,&stu.u,&stu.w,&stu.a);
		stu.money=0;
		if(stu.FinalScore>80&&stu.a>0)
			stu.money+=8000;
		if(stu.FinalScore>85&&stu.ClassScore>80)
			stu.money+=4000;
		if(stu.FinalScore>90)
			stu.money+=2000;
		if(stu.FinalScore>85&&stu.w=='Y')
			stu.money+=1000;
		if(stu.ClassScore>80&&stu.u=='Y')
			stu.money+=850;
		total+=stu.money;
		if(stu.money>max.money)
			max=stu;
	}
	printf("%s\n%d\n%d\n",max.name,max.money,total);
}