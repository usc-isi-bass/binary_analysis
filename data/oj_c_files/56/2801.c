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
	int t,a[4],i;
	scanf("%d",&t);
	a[0]=t/10000;
	a[1]=(t-a[0]*10000)/1000;
	a[2]=(t-a[0]*10000-a[1]*1000)/100;
    a[3]=(t-a[0]*10000-a[1]*1000-a[2]*100)/10;
	a[4]=t-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10;
	for(i=4;a[i]!=0&&i>=0;i--)
	printf("%d",a[i]);
}
