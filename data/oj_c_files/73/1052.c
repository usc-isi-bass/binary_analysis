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
	int * p[5],* q[5];
	int a[5][5],* point;
	point = * a;
    
	int i,j;
	for(i=0;i<25;i++)
	{
			cin >> *point;
			point++;
	}

	for( i=0;i<5;i++)
	{
		* (p+i) = * ( a+i );
		for( j=0,point=*(a+i) ;j<5; point++,j++ )
		{
			if( *point > **( p+i) )
				* (p+i) = point;
		}
	}

	int flag =0;
	for( i=0;i<5;i++ )
	{   
		int t=0;
		* (q+i) = (*a) +i;
		for( j=0,point=*(q+i); j<5 ;j++,point+=5)
		{
			if( *point < **(q + i) )
			{
				* (q+i ) = point;
				t=j;
			}
		}
		if( *(q+i) == * (p+t) )
		{
				cout << t+1 << ' '<< i+1 << ' ' << **(q+i) << endl;
				flag=1;
		}
	}

	if( flag ==0 )
		cout << "not found" << endl;
	return 0;
}
