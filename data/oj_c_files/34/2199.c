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

//************************
//**???????
//**?????  1100017658
//**???2011.11.15
//************************
void check(int, int flag[]);        // ?????
int main()                          // ?????
{
	int n, flag[1] = {0};           // ????
	cin >> n;                       // ?? n
    check(n, flag);                 // ????
    cout << "End";                  // ?? End
	return 0;
}                                   // ?????

void check(int n, int flag[])       // ?????
{
	int a, b;
	if (flag[0] == 1)
        return;                     // ?????????????
	if (n == 1)
	{
	    flag[0] = 1;
	    return;
	}                               // ????
	if (n != 1 && n % 2 == 1 && flag[0] == 0)
	{
		a = n;
		n = n * 3 + 1;
		cout << a << "*3+1=" << n << endl;
		check(n, flag);
	}                               // ?????
	if (n != 1 && n % 2 == 0 && flag[0] == 0)
	{
		b = n;
		n = n / 2;
		cout << b << "/2=" << n << endl;
		check(n, flag);
	}                               // ?????
}                                   // ?????