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

int fanxu(int n)
{
	int m,a[5];
	a[4]=n/10000;a[3]=(n/1000)%10;a[2]=(n/100)%10;a[1]=(n/10)%10;a[0]=n%10;
	if(a[4]!=0) m=10000*a[0]+1000*a[1]+100*a[2]+10*a[3]+a[4];
	else if(a[4]==0&&a[3]!=0) m=1000*a[0]+100*a[1]+10*a[2]+a[3];
    else if(a[4]==0&&a[3]==0&&a[2]!=0) m=100*a[0]+10*a[1]+a[2];
    else if(a[4]==0&&a[3]==0&&a[2]==0&&a[1]!=0) m=10*a[0]+a[1];
    else if(a[4]==0&&a[3]==0&&a[2]==0&&a[1]==0) m=n;
	return(m);
}
void main()
{
	int b[6],c[6],i;
	for(i=0;i<6;i++)
	{
	scanf("%d",&b[i]);
    c[i]=fanxu(b[i]);
	}
    for(i=0;i<6;i++)
	printf("%d\n",c[i]);
}