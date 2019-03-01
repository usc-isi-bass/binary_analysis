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
	int j,i,a,m,k,n;
	scanf("%d",&j);
    i=(int)(j/10000);
	a=(int)((j-i*10000)/1000);
	m=(int)((j-i*10000-a*1000)/100);
	k=(int)((j-i*10000-a*1000-m*100)/10);
	n=j-i*10000-a*1000-m*100-k*10;
	if(i!=0)printf("%d%d%d%d%d\n",n,k,m,a,i);
    if(i==0&&a!=0)printf("%d%d%d%d\n",n,k,m,a);
	if(i==0&&a==0&&m!=0)printf("%d%d%d\n",n,k,m);
	if(i==0&&a==0&&m==0&&k!=0)printf("%d%d\n",n,k);
	if(i==0&&a==0&&m==0&&k==0)printf("%d\n",n);
    return 0;
}
