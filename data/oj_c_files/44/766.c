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
	int a[6],i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	printf("%d\n",reverse(a[i]));
	return 0;
}
int reverse(int num)
{
	int i=0;
	if(num==0)
		i=0;
	while(num!=0)
	{
		i=i*10+num%10;
		num=num/10;
	}
	return i;
}