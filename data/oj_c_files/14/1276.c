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
	int id;
	int verbal;
	int math;
	int sum;
};

int main()
{
	struct stu *a,t;
	int n,i,j;
	scanf("%d",&n);
	a=(struct stu *)malloc(n*sizeof(struct stu));
		for (i=0;i<n;i++)
		{
			scanf("%d %d %d",&a[i].id,&a[i].verbal,&a[i].math);
			a[i].sum=a[i].verbal+a[i].math;
		}
		for (j=0;j<3;j++)
			for (i=n;i>j;i--)
				if (a[i].sum>a[i-1].sum)
				{
					t=a[i];
					a[i]=a[i-1];
					a[i-1]=t;
				}
		for (i=0;i<3;i++)
		printf("%d %d\n",a[i].id,a[i].sum); 

	return 0;

}