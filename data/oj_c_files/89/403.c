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
	int people[100000] = {0};
	int n , num1 , num2 ,flag = 0;
	cin>>n;
	for( ;; )
	{
		cin>>num1>>num2;
		if( num1 == 0 && num2 == 0)
		{
			for( int i = 0 ; i < n ; i++)
	        {
		       if( people[i] == n - 1)
		       {
			       flag = 1;
			       cout<<i<<endl;
		       }
	        }
	        if( flag == 0)
	        {
		         cout<<"NOT FOUND"<<endl;
	        }
			return 0;
		}
		else
		{
			people[num2]++;
		}
	}
	

}

