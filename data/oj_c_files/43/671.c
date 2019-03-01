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

int n;
void main()
{
	int a;
	scanf("%d",&n);
	for(a=3;a<=n-a;a+=2){
		if(chose(a)&&chose(n-a))
			printf("%d %d\n",a,n-a);
	}
}
int chose(int n)
{
	int i;
	if(n==3)
		return 1;
	else if(n%2){
		for(i=3;i<=sqrt(n)+2;i+=2)
			if(!(n%i))
				break;
		if(i>sqrt(n))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}