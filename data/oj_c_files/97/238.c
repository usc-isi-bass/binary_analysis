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

int main(int argc, char* argv[])
{
	int m,a[6],i;
	scanf("%d",&m);
	a[0]=m/100;
	m-=100*a[0];
	a[1]=m/50;
    m-=50*a[1];
	a[2]=m/20;
	m-=20*a[2];
	a[3]=m/10;
    m-=10*a[3];
	a[4]=m/5;
	m-=5*a[4];
	a[5]=m/1;
    for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}