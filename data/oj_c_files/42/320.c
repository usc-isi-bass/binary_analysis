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

//
//	?????	????????
//	?????	???????????????????????????????????????????????????????????????? 
//	?????	?  ? ? ? ? ? 1000012733 ?
//	?????	2010 ? 10 ? 31 ?
//
int main()
{
	int i, j, k, n, count = 0, p;	//?????????????
	int a [ 100000 ];	//????a[100000]
    cin >> n;	//????????????
	for ( i = 0; i < n; i ++ )
		cin >> a [ i ];		//??????????
	cin >> k;	//?????????????????????
	for ( j = 0; j < n; j ++ )
	{
		if ( a [ j ] != k )		//?????????????????????????k
		{
			a [ count ] = a [ j ];	//???????k?????????????????????�??�??
			count ++;	//??????????????count?1
		}
	}
	cout << a [ 0 ];	//???????a[0]????
	for ( p = 1; p < count ; p ++ )
	{
		cout << " " << a [ p ];		//?????????????????????????????????????????
	}
	return 0;
}