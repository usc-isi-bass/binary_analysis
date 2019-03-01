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
	int a[400];
	double sum=0;//???????????????
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
   sort(a, a + n);//??????????
 double average = sum / n;//????
   if (a[0] == a[n - 1])cout << a[0] << endl;
   else if (a[n-1] - average>average - a[0])cout << a[n-1]<<endl;
   else if (a[n-1] - average == average - a[0])cout << a[0] << ',' << a[n-1]<<endl;
   else cout << a[0] << endl;
   return 0;
}