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
	float x,y;
	float a[10000];
	float b[10000];
	cin >> n;
	for(int i = 1;i <= n;i++)
	{	
		cin >> a[i] >> b[i];
	}
	x = b[1] / a[1];
	for(int j = 2;j <= n;j++)
	{	
		y = b[j] / a[j];
	    if((x - y) > 0.05)
			cout << "worse" << endl;
		if((y - x) > 0.05)
			cout << "better" << endl;
	    if(fabs(y - x) <= 0.05)
			cout << "same" << endl;
	}
	return 0;
}