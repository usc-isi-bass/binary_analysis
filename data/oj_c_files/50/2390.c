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
	int a[365],w,i,j=0,b[12];
	cin>>w;
	for(i=0;i<365;i++)
	a[i]=i+w;
	b[0]=a[12];
	b[1]=a[12+31];
	b[2]=a[12+31+28];
	b[3]=a[12+31*2+28];
	b[4]=a[12+31*2+30+28];
	b[5]=a[12+31*3+30+28];
	b[6]=a[12+31*3+30*2+28];
	b[7]=a[12+31*4+30*2+28];
	b[8]=a[12+31*5+30*2+28];
	b[9]=a[12+31*5+30*3+28];
	b[10]=a[12+31*6+30*3+28];
	b[11]=a[12+31*6+30*4+28];
	for(i=0;i<12;i++)
	{
		if(b[i]%7==5&&j==0) {cout<<i+1;j++;continue;}
		if(b[i]%7==5&&j!=0) 
		{
			cout<<endl<<i+1;
		}
	}
	return 0;
}