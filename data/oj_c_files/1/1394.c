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

//*************************************************************************
//*????????? *****************************************************
//*??????? 1200012979 **********************************************
//*???2012.11.27 *******************************************************
//*************************************************************************
void breakup(int, int);
int sum;
int main ()
{
	int n, x, count=0;
	cin >> n ;                           //??????
	while( count < n )
	{
		sum = 0 ;
		count++ ;                        //?????
		cin >> x ;                       //??????
        if(x > 3) 
		    breakup(x, 2);                      //????
		cout << sum+1 << endl;           //???????????
	}
	return 0;
}

void breakup( int x, int j )
{
    int i, p, m;
	m = x;                              //???????
	p = sqrt( (double)x ) ;             //p??????????
	for( i = j ; i <= p ; i++ )
       if (m % i == 0 )                 //????????????????
	   {
		   sum++ ;                      //??????
		   x = m / i ;
		   breakup(x, i) ;
	   }
	return ;
}