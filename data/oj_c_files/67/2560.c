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

int main()//???
{
	int n;
	cin >> n;//????n
	double all0,p0;//?????????????????
	double x;
	cin >> all0 >> p0;
	x=100*p0/all0;//????????
	for (int i=1;i<=n-1;i++)//?n-1??????
	{
		double all,p;//???????????????
		cin >> all >> p;
		double y;
		y=100*p/all;//??????
		if (y-x>5)
		{
			cout << "better" << endl;
		}
		else if (x-y>5)
		{
			cout << "worse" << endl;
		}
		else 
		{
			cout << "same" << endl;
		}
	}
	return 0;
}