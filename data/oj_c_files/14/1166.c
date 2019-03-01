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

int main()
{
	struct student
	{
		int num;
		int chinese;
		int math;
		int sum;
	}m[4],t;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=3;i++)
		m[i].sum=-1;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&t.num,&t.chinese,&t.math);
		t.sum=t.chinese+t.math;
		if(t.sum>m[1].sum)
		{
			m[3]=m[2];
			m[2]=m[1];
			m[1]=t;
		}
		else
			if(t.sum>m[2].sum)
			{
				m[3]=m[2];
				m[2]=t;
			}
			else
				if(t.sum>m[3].sum)
					m[3]=t;
	}
	for(i=1;i<=3;i++)
		printf("%d %d\n",m[i].num,m[i].sum);
}