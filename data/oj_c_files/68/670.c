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
	int a(int n);
	int i,j,z;
	scanf("%d",&z);
    for(i=6;i<=z;i=i+2)
		for(j=3;j<=i-j;j=j+2)
			if(a(j)&&a(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
			return 0;
}
int a(int n)
{
	int k;
	for(k=3;k<=sqrt(n);k=k+2)
		if(n%k==0)
			return (0);
		return (1);
}