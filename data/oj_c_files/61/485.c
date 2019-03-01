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
	int casenum;
	cin >> casenum;
	int f[100];
	f[0] = 0;
	f[1] = 1;
	int i;
	for(i = 2;i <= 20; i ++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	while(casenum--)
	{
		int a;
		cin >> a;
		int i,j;
		cout<<f[a]<<endl;
	}
	return 0;
}