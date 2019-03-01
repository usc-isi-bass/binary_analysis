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
	int n;
	cin>>n;
	if(n<10)
		cout<<n;
	else if(10<=n && n<100)
	{
		cout<<n%10<<n/10;
	}
	else if(n>=100 && n<=999)
	{
		cout<<n-(n/10)*10<<n/10-(n/100)*10<<n/100;
	}
	else if(n>=1000 && n<=9999)
	{
		cout<<n-(n/10)*10<<n/10-(n/100)*10<<n/100-(n/1000)*10<<n/1000;
	}
	else if (n==10000)
	{
		cout<<00001;
	}
	return 0;
}
