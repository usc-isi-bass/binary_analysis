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
	int num;
	cin >> num;
	int flag1 = 0, flag2 = 0, flag3 = 0;
	
	if(num % 3 == 0)
		flag1 = 1;
	if(num % 5 == 0)
		flag2 = 1;
	if(num % 7 == 0)
		flag3 = 1;

	if(flag1 == 1 && flag2 == 1 && flag3 == 1)
		cout << "3 5 7" <<endl;
	if(flag1 == 1 && flag2 == 1 && flag3 == 0)
		cout << "3 5" <<endl;
	if(flag1 == 1 && flag2 == 0 && flag3 == 1)
		cout << "3 7" <<endl;
	if(flag1 == 0 && flag2 == 1 && flag3 == 1)
		cout << "5 7" <<endl;
	if(flag1 == 1 && flag2 == 0 && flag3 == 0)
		cout << 3 <<endl;
	if(flag1 == 0 && flag2 == 1 && flag3 == 0)
		cout << 5 <<endl;
	if(flag1 == 0 && flag2 == 0 && flag3 == 1)
		cout << 7 <<endl;
	if(flag1 == 0 && flag2 == 0 && flag3 == 0)
		cout << 'n' << endl;
	return 0;
}
