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

int main ()
{
	char ch[100] = {0};
	char shang[100] = {0};
	cin >> ch;
	int now = 0;
	for ( int i = 0, j = 0; i < strlen(ch); i ++, j ++ )
	{
		now = now * 10 + ch[i] - '0';
		if ( j == 0 && now/13 == 0 ) j--;
		else shang[j] = now/13 + '0';
		now = now%13;
	}
	if ( shang[0] == 0 ) cout << "0" << endl;
	else cout << shang << endl;
	cout << now;
	return 0;
}