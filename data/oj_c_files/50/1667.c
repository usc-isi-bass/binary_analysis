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
	int w,i,j;
	scanf("%d",&w);
	int a[12];
	a[0]=12;
	a[1]=43;
	a[2]=71;
	a[3]=102;
	a[4]=132;
	a[5]=163;
	a[6]=193;
	a[7]=224;
	a[8]=255;
	a[9]=285;
	a[10]=316;
	a[11]=346;
	for(i=0;i<=11;i++)
	{
		a[i]=w+(a[i]%7);
		if(a[i]>7)
		{
			a[i]=a[i]-7;
		}
	    if(a[i]==5)
		{
			printf("%d\n",(i+1));
		}
	}
	return 0;
}
