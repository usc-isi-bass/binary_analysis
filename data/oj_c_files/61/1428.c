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

/*
 *???: fibonacci.cpp
 *??: ???
 *????: 2012-10-13
 *??: ?????????a??
 */



const int AMAX=20;

int main()
{
	int fib[AMAX+1]; //??????????20?
	fib[1]=fib[2]=1;
	for (int i=3;i<=AMAX;i++){
		fib[i]=fib[i-1]+fib[i-2]; //??fib[i],i=3,4,...,20
	}

	int n,a;
	cin >> n;
	while (n--){
		cin >> a;
		cout << fib[a] <<endl;
	}
	return 0;
}


