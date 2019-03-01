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
	char str[1000];
	for(int i = 0; cin >> str; i++)
	{
		if(i == 0)
			cout << str;
		else
			cout << " " << str;
	}
	cout << endl;

	return 0;
}
