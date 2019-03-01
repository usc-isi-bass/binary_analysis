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
 int m,n,i,c;
 double a,r;
 double b[100];
	scanf("%d",&m);
	for(i=1;i<=m;i++){
    scanf("%d",&n);
  r=0.0;
  a=2.0/1;
  for(c=1;c<=n;c++){
    r+=a;
    a=1.0/a+1;
}
	b[i]=r;
	}
	for(i=1;i<=m;i++){
printf("%.3lf\n",b[i]);
	}
	return 0;
}
