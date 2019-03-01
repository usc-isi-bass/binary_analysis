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


int n;
int num[100];
int i;
int min=10000,max=-1,total=0;
int main(void)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]<min)
			min=num[i];
		if(num[i]>max)
			max=num[i];
		total+=num[i];
	}
	if(total-min*n==max*n-total)
		printf("%d,%d\n",min,max);
	else
		if(total-min*n<max*n-total)
		{
			printf("%d\n",max);
		}
		else if(total-min*n>max*n-total)
			printf("%d\n",min);
}
