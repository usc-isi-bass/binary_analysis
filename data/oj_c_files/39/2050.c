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

struct jiangli
{
	char name[20];
	int	study;
	int cla;
	char gugan;
	char xibu;
	int paper;
	int money;
}stu[100];
void main()
{
	int n,i,max,sum=0,k;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].study,&stu[i].cla,&stu[i].gugan,&stu[i].xibu,&stu[i].paper);
	for (i=0;i<n;i++)
	{
		stu[i].money=0;
		if (stu[i].study>80&&stu[i].paper>=1)
			stu[i].money+=8000;
		if (stu[i].study>85&&stu[i].cla>80)
			stu[i].money+=4000;
		if (stu[i].study>90)
			stu[i].money+=2000;
		if (stu[i].study>85&&stu[i].xibu=='Y')
			stu[i].money+=1000;
		if (stu[i].cla>80&&stu[i].gugan=='Y')
        	stu[i].money+=850;
	}
	max=stu[0].money;
	for (i=0;i<n;i++)
	{
		sum=sum+stu[i].money;
		if (max<stu[i].money)
		{
			max=stu[i].money;
		    k=i;
		}
	}
		printf("%s\n%d\n%d",stu[k].name,stu[k].money,sum);
}