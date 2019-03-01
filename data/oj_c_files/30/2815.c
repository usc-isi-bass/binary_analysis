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
	int n,i=1,c;
	int sum=0;
	cin>>n;
	while(i<=n&&i<=10)
	{
        if((i%7)&&((i-7)%10))
			sum+=i*i;
		i=i+1;
	}
	while(i<=n)
	{
		c=i/10;
		if((i%7)&&((i-7)%10)&&(c%7))
			sum+=i*i;
		i=i+1;
	}
		cout<<sum<<endl;
	return 0;
}