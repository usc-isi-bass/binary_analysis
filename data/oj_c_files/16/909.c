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
	if(n/10==0)cout<<n<<endl;
	else if(n/100==0)cout<<n%10<<n/10<<endl;
	else if(n/1000==0)cout<<n%10<<n%100/10<<n/100<<endl;
	else if(n/10000==0)cout<<n%10<<n%100/10<<n%1000/100<<n/1000<<endl;
	else if(n==10000)cout<<1<<endl;
	return 0;
}