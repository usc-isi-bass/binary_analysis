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
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,i,b;
	scanf ("%d%d%d",&y,&m,&d);
	if ((y%4==0&&y%100!=0)||(y%400==0))
		a[2]=a[2]+1;
	b=d;
	for (i=1;i<m;i++)
	{	b=a[i]+b;}
	printf ("%d",b);
	return 0;
}
