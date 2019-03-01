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

struct Stu{
	int stuID;
	int mark;
}stu[3]={0};

int compare(const void *p1,const void *p2)
{
	struct Stu *a;
	struct Stu *b;
	a=(struct Stu*)p1;
	b=(struct Stu*)p2;
	if(a->mark>b->mark) return -1;
	if(a->mark<b->mark) return 1;
	if(a->mark==b->mark) return 0;
}



void main(){
	int n,i;
	int ID,chi,math;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&ID,&chi,&math);
		if(chi+math>stu[2].mark) {
			stu[2].mark=chi+math;
			stu[2].stuID=ID;
		}
		qsort(stu,3,sizeof(struct Stu),compare);
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",stu[i].stuID,stu[i].mark);
}
