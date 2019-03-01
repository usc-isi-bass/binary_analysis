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

int main(int argc)
{   int i,n,c,b,a[10];
    cin>>n;   //??
	b=1;
	i=0;
	while(b!=0)
	{ a[i]=n%10;   //??????i+1??
	  b=n/10;         
	  n=b;
	  i++;}
	c=i;
	i=0;
	while (i<c)
	{cout<<a[i];i++;}   //?????
	return 0;
}