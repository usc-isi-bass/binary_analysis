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
	int a[12],b[12]={1,2,3,4,5,6,7,8,9,10,11,12},w,i;
	scanf("%d",&w);
	a[0]=13;
	a[1]=31+13;
	a[2]=31+28+13;
	a[3]=31+28+31+13;
	a[4]=31+28+31+30+13;
	a[5]=31+28+31+30+31+13;
	a[6]=31+28+31+30+31+30+13;
	a[7]=31+28+31+30+31+30+31+13;
	a[8]=31+28+31+30+31+30+31+31+13;
	a[9]=31+28+31+30+31+30+31+31+30+13;
	a[10]=31+28+31+30+31+30+31+31+30+31+13;
	a[11]=31+28+31+30+31+30+31+31+30+31+30+13;
	for(i=0;i<=11;i++)
	{
		if((a[i]-13+w)%7==0)
			printf("%d\n",b[i]);
	}
}