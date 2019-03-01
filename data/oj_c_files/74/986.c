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

int nu;
int f1(int m)
{
	int i,d=0;
	for (i=2;i<=sqrt(m);i++) if(m%i==0) {d=1;break;}
	if (d==0) return(0);
	else return(1);//1j 0z
}
int f2(int m)
{
	int mm=1,d=0,te;
	while (m/mm>=10) mm=mm*10;
	while (mm>=10)
	{ 
		if (m/mm!=m%10) {d=1;break;}
		m=m-m/mm*mm;
		m/=10;
		mm/=100;
	}
	if (d==0) return (0);
	else return (1);
}
void main ()
{
	int min,max,i;
	scanf ("%d%d",&min,&max);
	nu=0;
	for (i=min;i<=max;i++)	if (f1(i)==0&&f2(i)==0) {printf ("%d",i);nu=1;break;}
	for (i++;i<=max;i++) if (f1(i)==0&&f2(i)==0) {printf (",%d",i);}
	if (nu==0) printf ("no");
}

