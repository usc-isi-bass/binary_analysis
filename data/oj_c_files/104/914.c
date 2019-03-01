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


int x[100]={0},y[100]={0};

int meet(int a, int b)
{
	int i=1,j=1,roadmeet=1;
	x[0]=a;
	y[0]=b;
	for (;a!=1;a=a/2)
		x[i++]=a/2;
	for (;b!=1;b=b/2)
		y[j++]=b/2;
	for (;i>=0,j>=0;i--,j--)
		if (x[i]==y[j])
			roadmeet=x[i];
	return roadmeet;
}

int main( )
{
	int X,Y;
	cin>>X>>Y;
	cout<<meet(X,Y);
	return 0;
}