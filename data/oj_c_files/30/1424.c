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

//*************************************
//*?????7??????
//*?????? ?? 1200012904
//*???20121008
//************************************
int main()
{
    int n;
	int a, b, c;
	int i;
	int sum = 0;
	cin >> n;
	for (i=1; i<=n; i++)
	{
	    a = i % 7 ;
		b = i - 7;
		c= b % 10;
		if(a==0)
			sum = sum;                          //??i???7?????i
		else if (i>=70 && i<=79)
			sum = sum;                          //??i?????7?????i
		else if (c==0)
			sum =sum;                           //??i?????7?????i
		else
			sum = sum + i*i;                    //?????i??7??
	}
	cout << sum << endl;
	return 0;
}