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
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31},n,m,first[12],i;
	scanf("%d",&first[0]);
	for(i=0;i<12;i++)
	{
		switch(month[i])
		{
		case 31:
			if(first[i]+3<=7)
			{
				first[i+1]=first[i]+3;
			}
			else
			{
				first[i+1]=first[i]+3-7;
			}
			break;
		case 30:
			if(first[i]+2<=7)
			{
				first[i+1]=first[i]+2;
			}
			else
			{
				first[i+1]=first[i]+2-7;
			}
			break;
		case 28:
			first[i+1]=first[i];
			break;
		}
	}
	for(i=0;i<12;i++)
	{
		if(first[i]<=2)
		{
			first[i]=first[i]+12-7;
		}
		else 
			first[i]=first[i]+12-14;
		if(first[i]==5)
		{
			printf("%d\n",i+1);
		}
	}
	return 0;
}