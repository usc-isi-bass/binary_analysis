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

int max_people(int x[],int y[],int num)
{
	int i,j,max=0,temp;
	for(i=0;i<1000;i++)
	{   
		temp=0;
		for(j=0;j<num;j++)
		{
			if((i>=x[j])&&(i<y[j]))
				temp++;
		}
	
		if(temp>max)
			max=temp;
	}
	return max;
}


void main()
{
	int i,num=0,x[8000],y[8000];
	char c;
	do
	{
		scanf("%d%c",&x[num++],&c);
	}while(c!='\n');
	num=0;
	do
	{
		scanf("%d%c",&y[num++],&c);
	}while(c!='\n');
	printf("%d ",num);
	int max=max_people(x,y,num);
	printf("%d",max);
}