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
//*?????? 1300012733 **
//*???2013?11?29?
//********************************
int arr[11][11]={0};
int brr[11][11]={0};
void proliferate( int day )
{
	if( day == 0 )
		return;
	//?arr???brr?????????
	memcpy( brr , arr , sizeof(arr) );
	for( int i = 1; i <= 9; i++ )
		for( int j = 1; j <= 9; j++ )
		{
			//???
			arr[i][j] = 2 * brr[i][j] + brr[i-1][j] + brr[i+1][j] + brr[i][j-1] + brr[i][j+1]
			 + brr[i-1][j-1] + brr[i+1][j+1] + brr[i+1][j-1] + brr[i-1][j+1];
		}
	day--;
	proliferate( day );
}

int main()
{
	cin >> arr[5][5];
	int day;
	cin >> day;
	proliferate( day );
	//????
	for( int i = 1; i <= 9; i++ )
	{
		cout << arr[i][1];
		for( int j = 2; j <= 9; j++ )
			cout << ' ' << arr[i][j];
		cout << endl;
	}
	return 0;
}