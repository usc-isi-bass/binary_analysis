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
	int a[21];
	a[1]=1;
	a[2]=1;
	a[3]=2;
	a[4]=3;
	a[5]=5;
	a[6]=8;
	a[7]=13;
	a[8]=21;
	a[9]=34;
	a[10]=55;
	a[11]=89;
	a[12]=144;
	a[13]=233;
	a[14]=377;
	a[15]=610;
	a[16]=987;
	a[17]=1597;
	a[18]=2584;
	a[19]=4181;
	a[20]=6765;
	int n,j,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		printf("%d\n",a[j]);
	}
	return 0;
}