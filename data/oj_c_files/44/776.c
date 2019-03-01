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

int reverse(int n)
{
	int back=0,flag=0;
	if(n>=0&&n<=9)
		back=n;
	else
	{
		if(n<0)
		{
			flag=1;
			n=-n;
		}
		while(n>=1)
		{
			back=back*10+n%10;
			n=n/10;
		}
	}
	if(flag==0)
		return back;
	else
		return -back;
}
int main()
{
	int i,a[6];
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(a[i]));
	return 0;
}