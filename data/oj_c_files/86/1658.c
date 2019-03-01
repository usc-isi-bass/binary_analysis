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
	int n, a[60] = {0}, b, i, x; 
	cin >> n;
	while (n != 0)
	{
		cin >> b; // b?????? 
		for (i = 1; i <= b; i++)
		{ 
			cin >> a[i]; // ???i????????? 
		} 
		for (i = b; ; i--)
		if ((a[i] + 3 * (i - 1)) <= 60) 
			break;	
		if (a[i] + 3 * i >= 60) 
			x = a[i]; // ??????? 
		else
			x = 60 - 3 * i; // ??????? 
		cout << x << endl;
		n--;		
	}
	return 0;
}
