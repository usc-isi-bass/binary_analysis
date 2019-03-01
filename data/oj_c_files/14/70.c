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
	int number;
	int score1;
	int score2;
};
struct student stu[100000];
int main()
{
	int n,i,first=0,second=0,third=0,a[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].number,&stu[i].score1,&stu[i].score2);
		a[i]=stu[i].score1+stu[i].score2;
	}
	for(i=0;i<n-1;i++)
	{
		if(a[first]<a[i])
		{
			third=second;
			second=first;
			first=i;
		}
		else if(a[second]<a[i])
		{
			third=second;
			second=i;
		}
		else if(a[third]<a[i])
		{
			third=i;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",stu[first].number,a[first],stu[second].number,a[second],stu[third].number,a[third]);
	return(0);
}