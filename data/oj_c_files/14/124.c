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
	int count;
	int yu;
	int shu;
	}stu[1000000];
void main()
{   
	int n,i,*p,max=0,sm=0,tm=0,j=0;
    p=(int *)malloc(1000000*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].count,&stu[i].yu,&stu[i].shu);
		*(p+i)=stu[i].yu+stu[i].shu;
	}
	    for(i=0;i<n;i++)
		max=(max>*(p+i))?max:(*(p+i));
		for(i=0;i<n;i++)
		{if((*(p+i)<max)&&(*(p+i)>sm))
		sm=*(p+i);}
		for(i=0;i<n;i++)
		{if((*(p+i)>tm)&&(*(p+i)<sm))
		tm=*(p+i);}

    for(i=0;j<3,i<n;i++)
	{
    if(*(p+i)==max)
	{
		printf("%d %d\n",stu[i].count,max);
    j++;
	}
	}

	for(i=0;j<3,i<n;i++)
	{if(*(p+i)==sm&&j<3)
	{
		printf("%d %d\n",stu[i].count,sm);
	    j++;
	}
	}
	for(i=0;j<3,i<n;i++)
	{
	        if(*(p+i)==tm&&j<3) 
			{
				printf("%d %d\n",stu[i].count,tm);
			j++;
			}
	}
}