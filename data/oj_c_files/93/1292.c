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
	int n;
	int num[3] = {0, 0, 0,};
	int count;
	
	cin >> n;
	
	if(n % 3 == 0)
	num[0] = 1;
	
	if(n % 5 == 0)
	num[1] = 1;
	
	if(n % 7 == 0)
	num[2] = 1;
	
	count = num[0] + num[1] + num[2];
	
	if( num[0] == 1)
	{
	if( count != 1)
	cout << 3 << " ";
	else
	cout << 3;
	
	count = count - 1;
	
	}
	
	if(num[1] == 1)
	{
		if( count != 1)
		cout << 5 << " " ;
		else
		cout << 5;
	}
	
	if(num[2] == 1)
	cout << 7;
	
	if(num[0] == 0 && num[1] == 0 && num[2] == 0 )
	cout << 'n';
	
	return 0;
}
