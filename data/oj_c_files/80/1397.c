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

int main(int argc)
{   int y1,y2,m1,m2,d1,d2,k,i,j;
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
	k=0;
    for (i=y1+1;i<y2;i++)
	{ if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
	{k=k+366;}
	else {k=k+365;}}
	if(y1==y2&&m1==m2)
	{k=d2-d1;}
	else
	{if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{m[1]=29;}
	for (i=m1;i<=11;i++)
	{k=k+m[i];}
	if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	{m[1]=29;}
	else {m[1]=28;}
	for (i=0;i<m2-1;i++)
	{k=k+m[i];}
	k=k+m[m1+1]-d1+d2;}
	cout<<k;
	 return 0;
	}
