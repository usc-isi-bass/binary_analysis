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
	int year,month,day,sum,i;
	int a[12];
	scanf("%d %d %d",&year,&month,&day);
	sum=0;
	a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=a[11]=31;
	a[3]=a[5]=a[8]=a[10]=30;
	if((year%4!=0)||((year%100==0)&&(year%400!=0))) a[1]=28;
	else a[1]=29;
	for(i=0;i<month-1;i++)
	{
		sum+=a[i];
	}
	sum=sum+day;
	printf("%d\n",sum);
	return 0;
}
