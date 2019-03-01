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

int reverse(int p)
{
	int m=0,k;
	k=abs(p);
	if (p!=0)
	{
		while (k!=0)
		{
			m=m*10+k%10;
			k=k/10;
		}
		m=m*(abs(p)/p);
	}
	else m=0;
	return m;
}
int main()
{
	int num,i;
	for (i=0;i<6;i++)
	{
		cin >>num;
		cout <<reverse(num)<<endl;
	}
	return 0;
}