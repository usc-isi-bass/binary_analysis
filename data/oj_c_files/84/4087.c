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
	int i,n,a,b,c;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	if(a<b){a=a+b;b=a-b;a=a-b;}
	else{a=a;b=b;}
    for(i=3;i<=n;i++)
	{
		scanf("%d",&c);
		if(c>a){b=a;a=c;}
		else if(c>b){a=a;b=c;}
		else{a=a;b=b;}
		
	}
	printf("%d\n",a);
	printf("%d",b);
}
