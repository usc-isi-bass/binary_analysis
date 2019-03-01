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
//????
int N,M;
int c = 0;
int plate[11] = {0};
//????????????
void Put( int k, int num )
{
	if(( k == N )&&( num >= plate[ N-1 ] ))
	{
		c++;
		return;
	}
	for( int i = plate[ k-1 ]; i <= num; i++ )
	{
		plate[ k ] = i;
		Put( k+1, num-i );
	}
}
int main()
{
	int t;
	cin >> t;
	for( int i = 1; i <= t; i++ )
	{
		cin >> M >> N;
		c = 0;
		//????
		Put( 1 , M );
		cout << c << endl;
	}
	return 0;
}