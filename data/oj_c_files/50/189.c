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


void main()
{
	int year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int w;
	int i,j=0,k=0;
	scanf("%d",&w);
	for(i=0;i<365;i++)
	{
		j++;
		if(j>year[k])
		{
			j-=year[k];
			k++;
		}
		if((i+w)%7==5 && j==13) printf("%d\n",k+1);
	}
	

}