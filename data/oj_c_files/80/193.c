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
	int y1,y2,m1,m2,d1,d2,s1=0,s2=0,i,t;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y1,&m1,&d1);
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0) )
	{
		m[1]=29;
	}
	for(i=1;i<y1;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			s1=s1+366;
		else
			s1=s1+365;
	}
	for(i=1;i<m1;i++)
	{
		s1=s1+m[i-1];
	}
	s1=s1+d1;
	scanf("%d%d%d",&y2,&m2,&d2);
	if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) )
	{
		m[1]=29;
	}
	else
		m[1]=28;
	for(i=1;i<y2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			s2=s2+366;
		else
			s2=s2+365;
	}
	for(i=1;i<m2;i++)
	{
		s2=s2+m[i-1];
	}
	s2=s2+d2;
	t=s2-s1;
	printf("%d",t);
	return 0;
}