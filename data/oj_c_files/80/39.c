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


main()
{
	int y1,y2,y3,m1,m2,m3,d1,d2,d3,n,i,j=0;
	int a[14]={0,0,31,59,90,120,151,181,212,243,273,304,334,365},b[14]={0,0,31,60,91,121,152,182,213,244,274,305,335,366};
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	if(y1>y2||y1==y2&&m1>m2||y1==y2&&m1==m2&&d1>d2)
	{
		y3=y1;
		y1=y2;
		y2=y3;
		m3=m1;
		m1=m2;
		m2=m3;
		d3=d1;
		d1=d2;
		d2=d3;
	}
	for(i=y1+1;i<y2;i++)
	{
		if(i%100!=0&&i%4==0||i%400==0)
			j++;
	}
	if(y1==y2)
	{
		if(m1==m2)
			n=d2-d1;
		if(m2>m1)
			n=a[m2]-a[m1]+d2-d1;
		if((y1%100!=0&&y1%4==0||y1%400==0)&&(m1<2&&m2>2||m1==2&&d1<29&&m2>2))
			n=n+1;
	}
	if(y2-y1==1)
	{
		n=365-a[m1]-d1+a[m2]+d2;
		if((y1%100!=0&&y1%4==0||y1%400==0)&&(a[m1]+d1)<60||(y2%100!=0&&y2%4==0||y2%400==0)&&(a[m2]+d2)>=60)
			n=n+1;
	}
	if(y2-y1>=2)
	{
		n=365-a[m1]-d1+a[m2]+d2+(y2-y1-1)*365+j;
		if((y1%100!=0&&y1%4==0||y1%400==0)&&(a[m1]+d1)<60||(y2%100!=0&&y2%4==0||y2%400==0)&&(a[m2]+d2)>=60)
			n=n+1;
	}
	printf("%d\n",n);
}

