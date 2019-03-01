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

//********************************
//*?????????           **
//*????? 1300012848        **
//*???2013.10.10             **
//********************************
int main()
{
	int n;
	double a,b,c,z;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{	
		cin >> a >> b >> c;
		z = -b / (2 * a);
		if (z == -0)
			z = 0;
		if(b * b - 4 * a * c > 0)
		{
			cout << "x1=";
		    printf("%.5f",(-b + sqrt(b * b - 4 * a * c))/(2 * a));
			cout << ";x2=";
			printf("%.5f",(-b - sqrt(b * b - 4 * a * c)) / (2 * a));
			cout << endl;
		}
		if(b * b - 4 * a * c == 0)
		{
			cout << "x1=x2=";
			printf("%.5f",z);
			cout << endl;
		}
		if(b * b - 4 * a * c < 0)
		{
			cout << "x1=";
			printf("%.5f",z);
		    cout << "+";
			printf("%.5f",sqrt(4 * a * c - b * b)/(2 * a));
			cout << "i;x2=";
			printf("%.5f",z);
			cout << "-";
			printf("%.5f",sqrt(4 * a * c - b * b)/(2 * a));
			cout << "i" << endl;
		}
	}
	return 0;
}