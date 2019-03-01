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

/*
 * 12.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
/*
 * 13.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
char a[1000] ;
int b[1000] ;
void chen() ;

int main()
{
	int n ,i,j;
	cin >> n ;
	a[0] = '1' ;
	for (i = 1 ; i<1000 ;i++)
		a[i] = '#' ;
	if (n == 0)
		cout << "1" ;
	else
	{	for (i = 1 ; i <= n ; i++)
			chen() ;
	for (i = 0 ; a[i] !='#' ; i++);
	for(j = i - 1 ; j>=0 ;j--)
		cout <<a[j] ;}
	return 0 ;
}

void chen()
{
	int carry = 0 ;
	int i ;
	for (i = 0 ;a[i]!= '#' ;i++)
	{
		b[i] =(a[i]-'0')* 2 + carry ;
		carry = b[i] / 10 ;
		b[i] = b[i] %10;
		a[i] =b[i] + '0' ;
	}
	if (carry)
		a[i] = carry + '0' ;
}

