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
	int m,n[6],i;
	int a[6]={100,50,20,10,5,1},b[7];
	scanf("%d",&m);
	b[0]=m;
	for(i=0;i<6;i++)
	{
		n[i]=(int)b[i]/a[i];
		b[i+1]=b[i]%a[i];
		printf("%d\n",n[i]);
	}
	return 0;
}