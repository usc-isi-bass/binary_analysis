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
	int a[1000];
	int m,len;
	int i;
	int temp,temp1;
	int wz,counts=0;
	scanf("%d %d",&len,&m);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;counts<=len;i=i+m)
	{
		
		wz=i+m;
		if(wz>len-1)
		{
			wz=wz-len;
			i=wz-m;
		}
		temp1=a[wz];
		a[wz]=temp;	
		temp=temp1;
		counts++;
	}
	printf("%d",a[0]);
	for(i=1;i<len;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
