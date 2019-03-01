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



int main(int argc, char* argv[])
{

int a[10],b[10],i,n,p;
scanf("%d",&n);
a[1] = 100;
a[2] = 50;
a[3] =20;
a[4]=10;
a[5]=5;
a[6]=1;

for (i=1;i<=6;i++)
{	
	for (p=1;p*a[i]<=n;p++)
	{}
	b[i]=p-1;
	n=n-b[i]*a[i];
}

for (i=1;i<=6;i++)
{	
	printf("%d\n",b[i]);

}
	
	return 0;
}
