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

int main ()
{
	int y1,y2,m1,m2,d1,d2,s,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	if((y1==y2)&&(m1==m2))
		printf ("%d",d2-d1);
	else
	{
	s=0;
	s=s+(y2-y1-1)*365;
	for(i=m1+1;i<=12;i++)
		s=s+a[i];
	for (i=1;i<m2;i++)
		s=s+a[i];
	s=s+d2;
	s=s+a[m1]-d1;
	for(i=y1+1;i<y2;i++)
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
			s=s+1;
	if(((y1%4==0)&&(y1%100!=0))||(y1%400==0))
		if ((m1<=2)&&(m2>2)||(y2>y1))
			s=s+1;
	if(((y2%4==0)&&(y2%100!=0))||(y2%400==0))
		if((m2>2)&&((y1<y2)||(m1<m2)))
			s=s+1;
	printf("%d",s);
	}
	return 0;
}