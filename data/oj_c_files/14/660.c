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

struct stu
{
	int num,yu,shu,sum;
} ;
void main()
{
	int n,i;
	struct stu a[4];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[0].num,&a[0].yu,&a[0].shu);
		a[0].sum=a[0].yu+a[0].shu;
		if (a[0].sum>a[1].sum)
		{
			a[3].sum=a[2].sum;
			a[3].num=a[2].num;
			a[2].sum=a[1].sum;
			a[2].num=a[1].num;
			a[1].sum=a[0].sum;
			a[1].num=a[0].num;
		}else
			if (a[0].sum>a[2].sum)
			{
				a[3].sum=a[2].sum;
			    a[3].num=a[2].num;
			    a[2].sum=a[0].sum;
			    a[2].num=a[0].num;
			}
			else if (a[0].sum>a[3].sum)
			{
				a[3].sum=a[0].sum;
			    a[3].num=a[0].num;
			}
	}
	for (i=1;i<=3;i++)
		printf("%d %d\n",a[i].num,a[i].sum);
}