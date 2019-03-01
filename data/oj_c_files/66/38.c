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
	int y,m,d,n=0,k,i,x,a[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y,&m,&d);
	if ((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
		a[2]=29;
	else
		a[2]=28;
	y=(y-1)%400+1;

	n=((y-1)/4-(y-1)/100+(y-1)/400)*2+(y-1-((y-1)/4-(y-1)/100+(y-1)/400));

	for (i=1;i<m;i++)
	{
		n+=a[i];
	}
	n+=d;
	k=(n-1)%7;
	switch (k)
	{
	case 0:
		printf("Mon.");
		break;
	case 1:
		printf("Tue.");
		break;
	case 2:
		printf("Wed.");
		break;
	case 3:
		printf("Thu.");
		break;
	case 4:
		printf("Fri.");
		break;
	case 5:
		printf("Sat.");
		break;
	case 6:
		printf("Sun.");
		break;
	}
	return 0;
}