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
	int y,d,m,i,j,e=0,total=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y,&m,&d);
	if (((y%4==0)&&(y%100!=0))||(y%400==0)) a[1]=29;
	for(i=1;i<m;i++)
	{
		total+=a[i-1];
	}
	total+=d;
	printf("%d\n",total);
}