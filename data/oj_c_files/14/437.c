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

    struct Student
    {
    	int num;
    	int yuwen;
    	int math;
    }temp,stu[100050];
  
    
    int main()
    {
    	int n,i,j,k;
    	scanf("%d",&n);
    	

    	for(i=0;i<n;i++)
    	{
    		scanf("%d %d %d",&stu[i].num,&stu[i].yuwen,&stu[i].math);
    	    stu[i].math=stu[i].yuwen+stu[i].math;
    	}
    	for(i=0;i<3;i++)
    	{
    		k=i;
    		for(j=i+1;j<n;j++)
    		if(stu[j].math>stu[k].math)
    		k=j;
    		temp=stu[k];stu[k]=stu[i];stu[i]=temp;
    	}
    	for(i=0;i<3;i++)
    	printf("%d %d\n",stu[i].num,stu[i].math);
    }