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
	char name[20];
	int final;
	int pingyi;
	char leader;
	char wester;
	int essay;
}stu[200];
void main()
{
	int n,i,sum=0,prize,max=0,k=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].final,&stu[i].pingyi,&stu[i].leader,&stu[i].wester,&stu[i].essay);
	for(i=0;i<n;i++)
	{
		prize=0;
		if(stu[i].final>80&&stu[i].essay>=1)
		{prize+=8000;sum+=8000;}
	    if(stu[i].final>85&&stu[i].pingyi>80)
		{prize+=4000;sum+=4000;}
		if(stu[i].final>90)
		{prize+=2000;sum+=2000;}
        if(stu[i].final>85 && stu[i].wester=='Y') 
		{prize+=1000;sum+=1000;}
		if(stu[i].pingyi>80&&stu[i].leader=='Y')
		{prize+=850;sum+=850;}
		if(prize>max) 
		{max=prize;k=i;}
	}
    printf("%s\n",stu[k].name);
    printf("%d\n%d\n",max,sum);
}