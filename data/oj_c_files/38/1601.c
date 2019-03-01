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


int main(){
	int n,i,k,j;
	double x[100],s[100]={0},a,S[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
        scanf("%d",&n);
		a=0;
        for(j=0;j<n;j++)
		{
          scanf("%lf",&x[j]);
          a+=x[j];
		}
        for(j=0;j<n;j++)
		{
	    s[i]+=pow((x[j]-a/n),2);
		}
	
	    S[i]=sqrt(s[i]/n);
	}
	for(i=0;i<k;i++)
	{
	    printf("%.5lf\n",S[i]);
	}



return 0;
}