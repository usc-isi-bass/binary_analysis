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
	int math;
	int chin;
	int sum;
}st[100000],t;
void main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d %d %d",&st[i].number,&st[i].math,&st[i].chin);
		st[i].sum=st[i].math+st[i].chin;
	}
	for(i=0;i<3;i++)
		for(j=n;j>=1;j--)
			if(st[j].sum>st[j-1].sum)
			{
				t=st[j-1];
				st[j-1]=st[j];
				st[j]=t;
			}
			for(i=0;i<3;i++)
			printf("%d %d\n",st[i].number,st[i].sum);
}


