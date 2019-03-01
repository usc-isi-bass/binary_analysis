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
	char dip;
	int a[300]={-1},b,c,d,fir,sec;
	fir=-1;
	sec=-1;
	b=0;
	for(c=0;c<300;c++)
	{
		a[c]=-1;
	}
	do
	{
		scanf("%d%c",&a[b],&dip);
		b++;
	}
	while(dip==','); 
	d=b;
	b=0;
	do
	{
		if(a[b]>fir) 
		{
			c=fir;fir=a[b];sec=c;
		}
		
		else if ((a[b]<fir)&&(a[b]>=sec)) sec=a[b];
		b++;
	}
	while(a[b]!=-1);
	if(d==1) printf("No");
	else if(sec==0||sec==-1) printf("No");
	else printf("%d",sec);
	return 0;
}
