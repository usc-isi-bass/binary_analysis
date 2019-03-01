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
	int isprime(int x);
	int a,b;
	cin>>b;
	for(int i=3;i<=b/2;i++)
		if(isprime(i)&&isprime(b-i)) cout<<i<<" "<<b-i<<endl;
	return 0;
	
}
int isprime(int x)
{
	for(int y=2;y<=x/2;y++)
	{
		if(x%y==0) return 0;
	}
	return 1;
}
