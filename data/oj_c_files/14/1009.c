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
	int num,z;
}a,max1,max2,max3;

void main()
{
	int i,n,x,y;
	scanf("%d",&n);	
	max1.z=-1;
	max2.z=-1;
	max3.z=-1;
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&a.num,&x,&y);
		a.z=x+y;
		if (a.z>max1.z)
		{
			max3.num=max2.num;
			max3.z=max2.z;
			max2.num=max1.num;
			max2.z=max1.z;
			max1.num=a.num;
			max1.z=a.z;
		}
		else if (a.z>max2.z)
		{
			max3.num=max2.num;
			max3.z=max2.z;
			max2.num=a.num;
			max2.z=a.z;
		}else if (a.z>max3.z)
		{
			max3.num=a.num;
			max3.z=a.z;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",max1.num,max1.z,max2.num,max2.z,max3.num,max3.z);
}