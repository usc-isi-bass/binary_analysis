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
	int n,a[100],t,i;
	scanf("%d",&n);
  	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=(n-1)/2;i++)
	{t=a[i];a[i]=a[n-i-1];a[n-i-1]=t;}
    for(i=0;i<=n-1;i++) 
	{if(i!=n-1) printf("%d ",a[i]);
	else printf("%d",a[i]);
	}
	return 0;
}