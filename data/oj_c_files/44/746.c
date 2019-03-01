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
	int reverse(int num);
	int i,a[6],b[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=reverse(a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
int reverse(int num)
{
	int s=0,k;
	do
	{
		k=num%10;
		num=num/10;
                   s=(s+k)*10;
	}
           while(num!=0);
s=s/10;
return(s);
}

