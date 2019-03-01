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

int main ()
{
	int n;
	scanf ("%d",&n);
	int i,r = 0,t = n,a,tmp;
	do 
	{
		t=(int)(t/10);
		r++;
	}while (t>0);
	for (i=0;i<r;i++)
	{
		t = n/(int)pow(10,i);
		a = t%10;
		printf ("%d",a);
	}
	return 0;
}