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

//*********************************************************
//*????????????                               *
//*?  ?????                                         *
//*?????2010.10.29.                                  *
//*??????????????????                   *
//*********************************************************
int main()
{
	int n, i;                                  //?????n???i?????
	cin>>n;
	int a[100000];                             //??????
	for ( i = 0; i < n; i ++ )
	{
		cin>>a[i];                             //??????
	}
	int m;                                     
	cin>>m;                                    //??m???????
	int k, t,count = 0;
	for ( k = 0, t = 0; t < n; t ++ )          
	{
		if ( a[t] != m )                       //??a[t]?????????????a[k]?
		{
			a[k] = a[t];
			k ++;
		}
		else
			count ++;                         //????????
	}
	for ( i = 0; i < n - count; i ++)         //??n-count??  
	{
		if ( i == n - count - 1)
			cout<<a[i]<<endl;                  //??????????????
		else
			cout<<a[i]<<" ";                   //????????????????
	}
	return 0;
}