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
	int a,i,j,b,x,p=0,q;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(x=0,j=1;j<=a;j++)
		{
			scanf("%d",&b);
			if(b==0) x=x+1;
			else x=x+0;
		}
		if(x!=0) {p++;q=x;}
	}
    printf("%d",(p-2)*(q-2));
	return 0;
}
