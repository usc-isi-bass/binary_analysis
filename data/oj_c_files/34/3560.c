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

/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?11?15?
 *************************/
int num(int a)	//????num????a???????
{
	if (a % 2 == 0)	//?a???
	{
		cout << a << "/2=" << a / 2 << endl;	//???
		return (a / 2);	//?num???a/2
	}
	else	//?a???
	{
		cout << a << "*3" << "+1=" << a * 3 + 1 << endl;	//???
		return (a * 3 + 1);	//?num??a*3+1
	}
}
int main()
{
	int a;
	cin >> a;
	while (a != 1)	//?a??1?????num
	{
		a = num(a);
	}
	cout << "End" << endl;
	return 0;
}