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
{int n,i,j;
double a[1000],b[1000],t,l=0;
scanf ("%d\n",&n);
for(i=0;i<n;i++){scanf("%lf %lf",&a[i],&b[i]);
}
for(i=0;i<n;i++){for(j=i+1;j<n;j++)
{t=sqrt(pow(a[i]-a[j],2)+pow(b[i]-b[j],2));
if(l<t){l=t;}}
}
	printf("%.4lf\n",l);
	return 0;
}
