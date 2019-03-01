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

int qi(int num)
{
	int a,b;
	a=num/10;
	b=num-10*a;
	if(num%7==0)
		return 1;
		else if(a==7||b==7)
			return 1;
		else 
			return 0;
}
int main()
{
	int n;
	int sum=0;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(qi(i)==0)
			sum=sum+i*i;
		printf("%d\n",sum);
return 0;
}
