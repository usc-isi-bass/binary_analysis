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
	int ch;
	int ma;
	int sum;
	int key;

}stu[100000];
void main()
{
	int n,i,max=0,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].number,&stu[i].ch,&stu[i].ma);
		stu[i].sum=stu[i].ch+stu[i].ma;
		stu[i].key=0;
	}
	for(i=0;i<n;i++)
		if(max<stu[i].sum&&stu[i].key==0)
		{
			max=stu[i].sum;
			l=i;
		}
	printf("%d %d\n",l+1,max);
	max=0;
	stu[l].key=1;
	l=0;
    for(i=0;i<n;i++)
		if(max<stu[i].sum&&stu[i].key==0)
		{
			max=stu[i].sum;
			l=i;
		}
	printf("%d %d\n",l+1,max);
	max=0;
	stu[l].key=1;
	l=0;
	for(i=0;i<n;i++)
		if(max<stu[i].sum&&stu[i].key==0)
		{
			max=stu[i].sum;
			l=i;
		}
	printf("%d %d\n",l+1,max);
	max=0;
	stu[l].key=1;
	l=0;
}



