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
	int k,a[6],i;
	scanf("%d",&k);
	a[0]=k/100;k-=a[0]*100;
	a[1]=k/50;k-=a[1]*50;
	a[2]=k/20;k-=a[2]*20;
	a[3]=k/10;k-=a[3]*10;
	a[4]=k/5;k-=a[4]*5;
	a[5]=k;
	for(i=0;i<6;i++)
		printf("%d\n",a[i]);
}