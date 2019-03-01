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

int sum;
int main()
{
	void pingguo();
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		pingguo();
	}
	return 0;
}
void pingguo()
{
	sum=0;
	void func(int,int);
	int apple,plate;
	scanf("%d %d",&apple,&plate);
	func(apple,plate);
	printf("%d\n",sum);
}
void func(int apple,int plate)
{
	if(apple==0||plate==1)
	{
		sum++;
	}
	else
	{
		if(plate>apple)
		{
			func(apple,apple);
		}
		else
		{
			func(apple-plate,plate);
			func(apple,plate-1);
		}
	}
}
			
			




	
