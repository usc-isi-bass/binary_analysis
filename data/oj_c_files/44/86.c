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
	int i,a;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a);
		printf("%d\n",reverse(a));
	}
	return 0;
}
int reverse(int num)
{
int s=0;
if(num*num<100)
{
s=num;
}
else if(num*num<10000)
{
s=num%10;
s=s*10+(num/10)%10;
}
else if(num*num<1000000)
{
s=num%10;
s=s*10+(num/10)%10;
s=s*10+(num/100)%10;
}
else if(num*num<100000000)
{
s=num%10;
s=s*10+(num/10)%10;
s=s*10+(num/100)%10;
s=s*10+(num/1000)%10;
}
else
{
s=num%10;
s=s*10+(num/10)%10;
s=s*10+(num/100)%10;
s=s*10+(num/1000)%10;
s=s*10+(num/10000)%10;
}

return s;
}