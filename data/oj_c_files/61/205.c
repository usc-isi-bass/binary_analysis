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

long f(int x);
int main()
{
	int num,n[10],r;
	cin >> num;
	for(r=0;r<num;r++) cin >> n[r];
	for(r=0;r<num;r++) cout << f(n[r]) << '\n';
	return 0;
}
long f(int x)
{
	if(x==1||x==2) return 1;
	else return f(x-1)+f(x-2);
}