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
	double n, i, a, x = 0, y = 0, z = 0, k = 0;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> a;
		if(a <= 18)
			x++;
		else if(a <= 35)
			y++;
		else if(a <= 60)
			z++;
		else 
			k++;
	}
	cout <<fixed << setprecision(2) <<"1-18: "<< x / n * 100 << '%' << endl <<"19-35: "<< y / n * 100 << '%' << endl <<"36-60: "<< z / n * 100 << '%' << endl <<"60??: "<< k / n * 100 << '%' << endl;
	return 0;
}

