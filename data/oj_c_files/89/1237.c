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
 	int n, a[10005] = {0}, x, y; //a???????? 
 	int sum[10005] = {0}, i; //sum???????????? 
 	
 	cin >> n; 	
 	cin >> x >> y;
 	while ( x != 0 || y != 0 )
 	{
  	 	a[x] = 1;
		sum[y]++;
		cin >> x >> y;     
  	}
  	for ( i = 0; i < n; i++ )
  	{
	 	if ( sum[i] == n - 1 && a[i] == 0 )
		{   cout << i << endl; 
			break;
		}	 
    }
    if ( i == n )
       cout << "NOT FOUND" << endl;
 	
 	return 0;
}