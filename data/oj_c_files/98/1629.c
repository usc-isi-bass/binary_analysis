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
//*????????  **
//*????? 1300012845 **
//*???2013.12.11  **
//********************************
char str[1000][50] = {0};


int main ()
{
	int label[1000] = {0};
	int i, j, n;
	int l= -1;
	int k = 0;
	char str[1000][50] = {0};
	char (*p)[50] = str;//p???????
	cin >> n;
	for ( i = 1; i <= n; i++)
		cin >> str[i];
	p++;
	while ( k <= n )//??????????
	{
		while ( l <= 80 )//?????80???????
		{
			k++;
		    l+=1+strlen(str[k]);//????
		}
	k = k - 1, l = -1;//k?????
	label[k] = 1;//???????????
	}
	for ( i = 1; i <= n - 1; i++ )//??
	{
		if ( label[i] != 1)
			cout << *(p++) <<" ";
		else
			cout << *(p++) << endl;
	}
	cout << str[i] << endl;
	return 0;
}
