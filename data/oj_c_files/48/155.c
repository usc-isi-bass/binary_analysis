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

int num[10][10] , newnum[10][10] ;
void change(int , int);
int main()
{
	int m , n , i , j , k;
	cin >> m >> n ;
	memset(num,0,sizeof(num));
	num[5][5] = m ;
	for ( i = 1 ; i <= n ; i++ )
	{
		memset(newnum,0,sizeof(newnum));
		for ( j = 1 ; j <= 9 ; j++ )
			for (k = 1 ; k <= 9 ; k++ )
				change(j,k);
		for ( j = 1 ; j <= 9 ; j++ )
			for (k = 1 ; k <= 9 ; k++ )
				num[j][k] += newnum[j][k] ;
	}
	for ( i = 1 ; i <= 9 ; i++ )
	{
		for ( j = 1 ; j <= 9 ; j++ )
		{
			if ( j == 1 ) cout << num[i][j] ;
			else cout << " " << num[i][j] ;
		}
		cout << endl ;
	}
	return 0 ;
}
void change(int a , int b)
{
	int i , j ;
	for ( i = a-1 ; i <= a+1 ; i++ )
		for ( j = b-1 ; j <= b+1 ; j++ )
			newnum[a][b] += num[i][j] ;
}