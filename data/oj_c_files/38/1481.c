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
    double b[100][1000];
	int k,n[100]={0},i,j;
	double t[100]={0},u[100]={0},a[100]={0},s[100]={0};
    scanf("%d",&k);
    for(i=0;i<k;i++)
	{
        scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&b[i][j]);
		}
	} 
	for(i=0;i<k;i++)
	{
		for(j=0;j<n[i];j++)
		{
			t[i]+=b[i][j];
		}
		a[i]=t[i]/n[i];
		for(j=0;j<n[i];j++)
		{
			u[i]+=pow((b[i][j]-a[i]),2);
		}
			s[i]=sqrt(u[i]/n[i]);
			printf("%.5lf\n",s[i]);
	}
}