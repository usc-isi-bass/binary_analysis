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

int reverse(int num)
{
	int t=0;
	for(;num!=0;num=num/10)
		t=t*10+num%10;
	return(t);
}
void main()
{int i,a[6];
	for(i=0;i<6;i++)
	{scanf("%d\n",&a[i]);
	printf("%d\n",reverse(a[i]));}
}