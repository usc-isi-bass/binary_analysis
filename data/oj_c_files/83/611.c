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
	int i,n,b[10];
	float f=0,a[10],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=90) f=f+4.0*a[i];
		else if(b[i]>=85) f=f+3.7*a[i];
		else if(b[i]>=82) f=f+3.3*a[i];
		else if(b[i]>=78) f=f+3.0*a[i];
		else if(b[i]>=75) f=f+2.7*a[i];
		else if(b[i]>=72) f=f+2.3*a[i];
		else if(b[i]>=68) f=f+2.0*a[i];
		else if(b[i]>=64) f=f+1.5*a[i];
		else if(b[i]>=60) f=f+1.0*a[i];
	}
	for(i=0;i<n;i++)
		t=t+a[i];
	printf("%.2f",f/t);
}