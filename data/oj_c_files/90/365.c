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

int way(int a , int b , int c);
int main()
{
	int t , m , n , i , j , sum=0 , p=1;
	cin >> t ;
	for ( j = 0 ; j < t ; j++)
	{
		cin >> m >> n ;
		for ( i = 1 ; i <= n ; i++)
			sum = sum + way(m , i , p) ;
		cout << sum << endl;
		sum = 0 ;
	}
	return 0 ;
}
int way(int a , int b , int c)
{
	int num = 0 , j ;
	if(b == 1)	return 1 ;
	else 
	{	for(j = c ; j <= a / b ; j++)
			num = num + way(a - j , b - 1 , j) ;
	}
	return num ;
}