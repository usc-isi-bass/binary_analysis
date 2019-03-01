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

/**
 * @file    3.cpp              
 * @author  ??? 1100013230               
 * @date    2011-9-29         
 * @descrption        
 *          ????????7??????        
*/
int main()
{   
    int n, m, sum;                                      // sum??7??????
	cin>>n;
	sum = 0;
	for (m = 1; m <= n; m = m + 1)
	{
	    if (m % 10 == 7 || m % 7 == 0 || m / 10 == 7)   // ????7?????sum??
			sum = sum;
		else                                            // ????7???sum????????
			sum = sum + m * m;
	}
	cout<<sum;		
    return 0;
}