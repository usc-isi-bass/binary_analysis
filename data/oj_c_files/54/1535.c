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
	int monkey[1000],n,k,i=3;
	cin>>n>>k;
	monkey[n]=k;
	while(i>=1)//??i?????
	{
		monkey[n]+=n;
		for(i=n-1;i>=1;i--)
		{
			if(monkey[i+1]%(n-1)!=0)
				break;
			else
				monkey[i]=monkey[i+1]*n/(n-1)+k;
		}
	}
	cout<<monkey[1];
	return 0;
}