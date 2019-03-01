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
int i,n,a,b,c,d;
scanf("%d",&n);
scanf("%d",&a);
b=a;
d=a;
for(i=1;i<n;i++)
{
	scanf("%d",&a);
	if(a>b){b=a;}
	else{
		if(a>d){d=a;}
	}
}

printf("%d\n%d",b,d);
return 0;
}