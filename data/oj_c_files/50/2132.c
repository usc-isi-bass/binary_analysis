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
	int a[13];
	int i,j,k,w;
	scanf("%d",&w);
	a[1]=12;
	a[2]=43;
	a[3]=71;
	a[4]=102;a[5]=132;
	a[6]=163;
	a[7]=193;
	a[8]=224;
	a[9]=255;
	a[10]=285;
	a[11]=316;
	a[12]=346;
	j=w-5;
	for(i=1;i<13;i++)
	{
		a[i]=a[i]+j;
		if ((a[i]%7)==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}