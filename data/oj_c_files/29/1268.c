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
   int m,n;

scanf("%d",&m);
int i;
double a,b,c;
for(i=0;i<m;i+=1){
	scanf("%d",&n);
	int j;
	double s=0;
	a=2;
	b=1;
	for(j=1;j<=n;j+=1)
	{  s+=a/b;
		c=a;
	 a=a+b;
	b=c;}

printf("%.3lf\n",s);
}
return 0;
}