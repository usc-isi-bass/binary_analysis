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


struct statistics
	{
		int num;
		int chinese;
		int math;
		int sum;
	} form[100000],temp;
int main()
{
	
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&form[i].num,&form[i].chinese,&form[i].math);
		form[i].sum=form[i].chinese+form[i].math;
	}
	for(i=0;i<3&&i<n-1;i++)
	{
		int k=i;
		for(j=i+1;j<n;j++)
		{
			if(form[j].sum>form[k].sum)
			{
				k=j;
			}
		}
		if (k!=i)
		{
			temp=form[i];
			form[i]=form[k];
			form[k]=temp;

		}
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",form[i].num,form[i].sum);
	return 0;
}