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

struct Student
{
	char id[10];
	char name[100];
	char sex;
	char year[10];
	char mark[10];
	char ad[20];
}stu[1000];
int main()
{
	int i,k=0;
	for(i=0;;i++)
	{
		scanf("%s ",stu[i].id);
		if(stu[i].id[0]=='e')
			{break;}
		else
		{scanf("%s %c %s %s %s\n",stu[i].name,&stu[i].sex,stu[i].year,stu[i].mark,stu[i].ad);
		k++;}
	}
	for(i=k-1;i>=0;i--)
		printf("%s %s %c %s %s %s\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].year,stu[i].mark,stu[i].ad);		
}
