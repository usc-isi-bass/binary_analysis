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
	int num,a,b,r;
	cin >> num;
	for(a=3;a<=num/2;a+=2){
		for(r=2;r<a;r++) if(!(a%r)) r=a;
		if(r==a){
			b=num-a;
			for(r=2;r<b;r++) if(!(b%r)) r=b;
		}
		if(r==b) cout << a << ' ' << b << '\n';
	}
	return 0;
}