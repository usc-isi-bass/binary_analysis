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
	int a[4],b;
	char cc;
	cin>>b;
	a[0]=b%10;
	b=b/10;
	a[1]=b%10;
	b=b/10;
	a[2]=b%10;
	b=b/10;
	a[3]=b%10;
	b=b/10;
	if(a[3]!=0)
		cout<<a[0]<<a[1]<<a[2]<<a[3];
	else if(a[2]!=0)
		cout<<a[0]<<a[1]<<a[2];
	else if(a[1]!=0)
		cout<<a[0]<<a[1];
	else cout<<a[0];



	return 0;
}

