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
	int w,i;
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{

	if(i==1)
	{

		if((w+12%7)%7==5)
		{
			printf("%d\n",i);
	
		}
	}
	if(i==2)
	{
		if((w+43%7)%7==5)
		{
			printf("%d\n",i);
	
		}
	}
	if(i==3||i==5||i==7)
	{
		if((w+(31+28+12+(i-3)*61/2)%7)%7==5)
		{
			printf("%d\n",i);
	
		}
	}
	if(i==4||i==6||i==8)
	{
		if((w+(31+28+31+12+(i-4)*61/2)%7)%7==5)
		{
			printf("%d\n",i);
		
		}
	}
	if(i==9||i==11)
	{
		if((w+(28+31*5+2*30+12+(i-9)*61/2)%7)%7==5)
		{
			printf("%d\n",i);
			
		}
	}
	if(i==10||i==12)
	{
		if((w+(28+5*31+3*30+12+(i-10)*61/2)%7)%7==5)
		{
			printf("%d\n",i);
			
		}
	}

	}

	return 0;
}