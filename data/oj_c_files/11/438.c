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
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	int i;

	
	

	
	for (i=0;i<month;i++)
		{
			sum+=a[i-1];
		}
		sum=sum+day;
		

	if ((year%4==0 && year%100!=0)|| year%400==0)
	{
		if (month<=2)
		{
			printf("%d\n",sum);
		}
		if (month>2)
		{
			sum=sum+1;
			printf("%d\n",sum);
		}
	}
	else

		printf("%d\n",sum);
	return 0;
}