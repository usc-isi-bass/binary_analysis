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

main()
{
	int reverse(int num);
	int n,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}


}
int reverse(int num)
{
	int rev=0;
	if(num>=0)
	{
		while(num)
		{
			rev=rev*10+num%10;
			num=num/10;
		}
	}
	else
	{
		int fan=-num;
		while(fan)
		{
			rev=rev*10+fan%10;
			fan=fan/10;
		}
		rev=-rev;
	}
	return rev;
}
