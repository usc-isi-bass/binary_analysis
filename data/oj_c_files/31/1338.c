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
	char name[100];
	char s;
	int age;
	float score;
	char add[100];
	
};



int main()
{
	int i,j,n=0;
	struct student stu[1000];
	for(i=0;i<1000;i++)
	{
		scanf("%s",stu[i].xuehao);
		if(stu[i].xuehao[0]=='e'&&stu[i].xuehao[1]=='n'&&stu[i].xuehao[2]=='d') break;
		scanf("%s %c %d %f %s",stu[i].name,&stu[i].s,&stu[i].age,&stu[i].score,stu[i].add);
		n++;
	}
	for(j=n-1;j>=0;j--)
	{
		if((int)stu[j].score==stu[j].score)
		printf("%s %s %c %d %d %s\n",stu[j].xuehao,stu[j].name,stu[j].s,stu[j].age,(int)stu[j].score,stu[j].add);
		else
			printf("%s %s %c %d %.1f %s\n",stu[j].xuehao,stu[j].name,stu[j].s,stu[j].age,stu[j].score,stu[j].add);

	}
	return 0;
}
