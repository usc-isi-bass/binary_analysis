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
    int k,n,i,j;
    double x[1000];
    double s[100];
    scanf("%d",&k);
    for(i=1;i<=k;i++){
    	double sum1=0,b[1000],a,sum2=0;
    	scanf("%d",&n);
    	for(j=1;j<=n;j++){
    		scanf("%lf",&x[j]);
    		sum1+=x[j];
    	}
    	a=sum1/n;
    	for(j=1;j<=n;j++){
    		b[j]=(x[j]-a)*(x[j]-a);
    		sum2+=b[j];
    	}
    	s[i]=pow((sum2/n),0.5);
    }
    for(i=1;i<=k;i++){
    	printf("%.5lf\n",s[i]);
    }
return 0;
}