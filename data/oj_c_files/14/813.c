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
	int num;
	int chinese;
	int math;
	int score;
};
int main()
{
	int n;
	int i,k,j;
	struct Student student[100000];
	struct Student temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&student[i].num);
		scanf("%d",&student[i].chinese);
		scanf("%d",&student[i].math);
		student[i].score=student[i].chinese+student[i].math;
	}
	for(i=0;i<3;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(student[j].score>student[k].score) k=j;
		}
		if(k!=i)
		{
			temp=student[i];
			student[i]=student[k];
			student[k]=temp;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",student[i].num,student[i].score);
	}
	return 0;
}