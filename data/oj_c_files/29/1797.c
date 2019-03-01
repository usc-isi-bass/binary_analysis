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
	int m,i;
int n,j;
float x,s;
scanf("%d",&m);

for(i=0;i<m;i++)
{
	scanf("%d",&n);
	for(s=0,j=0,x=2.0f;j<n;j++)
	{
		s=s+x;
			x=1+1/x;
	}
	printf("%.3f\n",s);	
}
}