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
	struct Student
	{
		int num;
		int ch;
		int math;
	}stu[100000];
	int n,i,x=0,m=0,k=0,j,a[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d %d %d\n",&stu[i].num,&stu[i].ch,&stu[i].math);
	    a[i]=stu[i].ch+stu[i].math;
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<n;i++)
	{       
		
	   		if(a[i]>m)
		    {
			m=a[i];
		    x=stu[i].num;
			k=i;
			}
			
	}
	printf("%d %d\n",x,m);	a[k]=0;
            m=0;x=0;
    }
	return 0;
}






