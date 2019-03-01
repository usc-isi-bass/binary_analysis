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
		int num;
		int chinese;
		int math;
		int total;
	}a[100000];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i].num,&a[i].chinese,&a[i].math);
		a[i].total=a[i].chinese+a[i].math;
	}
	int max,numm;
	max=a[1].total;
	for(int j=0;j<3;j++)
	{
	for(i=0;i<n;i++)
	{
		if(max<a[i].total)
		{
			max=a[i].total;
			numm=i;
		}
	}
		printf("%d %d\n",numm+1,max);
		a[numm].total=0;
		max=0;
	}
	return 0;
}
