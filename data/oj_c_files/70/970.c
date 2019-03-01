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
	int n,i,j;
	float a[1000],b[1000],s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%f%f",&a[i],&b[i]);}
	for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	{
		if(s<(float)sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])))
			s=(float)sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
	}
	}
	printf("%.4f",s);
}