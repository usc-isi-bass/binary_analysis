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
	
	int judge(int x);
		int n,i,j,d=0;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{d=0;
		if(judge(i)==1)d=d+1;
        j=n-i;
        if(judge(j)==1)d=d+1;
		if(d==2)printf("%d %d\n",i,j);
		
	}
	
	return 0;
}
int judge(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) break;
	if(i>x/2) return 1;
	else return 0;
}