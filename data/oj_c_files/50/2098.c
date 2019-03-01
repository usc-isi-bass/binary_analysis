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


int main(){
	int d,m,w;
	scanf("%d",&w);
	if(w==6||w==7)
		d=1+5+7-w;
	else
		d=5-w+1;
	m=1;
	for(int i=d;d<=365;i+=7)
	{
		if(i==13)
			printf("%d\n",m);
		else
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10)
			{
				if(i>31)
				{
					i=i-31;
					m++;
				}
			}
			if(m==9||m==4||m==6||m==11)
			{
				if(i>30)
				{
					i=i-30;
					m++;
				}
			}
			if(m==2)
			{
				if(i>28)
				{
					i=i-28;
					m++;
				}
			}
		}
		d+=7;
	}
	return 0;
}
	




