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

int ren[1000000][2], ming[1000000][2];
int main()
{
	int n, i = 0, num = 0;
	memset(ming, 0, sizeof(ming));
	cin >> n;
	while(1)
	{
		cin >> ren[i][0] >> ren[i][1];
		if( ren[i][0] == 0 && ren[i][1] == 0 )
			break;
		else
		{	
			ming[ren[i][0]][0]++;
			ming[ren[i][1]][1]++;
		}
		i++;
	}
	for( i = 0; i < n; i++ )
	{
		if( ming[i][0] == 0 && ming[i][1] == n - 1 )
		{	
			cout << i << endl;
			num++;
		}
	}
	if( num == 0 )
		cout << "NOT FOUND" << endl;
	return 0;
}
