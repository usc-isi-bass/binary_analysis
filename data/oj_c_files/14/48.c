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

void main()
{
	int n,i,j,max,k;
	struct stu
	{
		int num;
		int chinese;
		int maths;
		int all;
	}stu[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].maths);
	for(i=0;i<n;i++)
		stu[i].all=stu[i].chinese+stu[i].maths;
	
	for(k=0;k<3;k++)
	{
	    max=stu[0].all;
	    for(i=0;i<n;i++)
		{
		   if(stu[i].all>max)
		   {
			max=stu[i].all;
			j=i;
		   }
		}
	
	printf("%d %d\n",stu[j].num,stu[j].all);
	stu[j].all=0;
	}
}
	



