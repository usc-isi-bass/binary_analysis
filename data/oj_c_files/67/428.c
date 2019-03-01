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
	int n,i,a,b,c;
    float x,y;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	x=b/(float)a;
    for(i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
        y=b/(float)a;
		if(y-x>0.05)
			  c=0;
		else if(x-y>0.05)
			  c=1;
        else c=2;
	
	if(c==0) printf("better\n");
    if(c==1) printf("worse\n");
	if(c==2) printf("same\n");
	}
		return 0;
}