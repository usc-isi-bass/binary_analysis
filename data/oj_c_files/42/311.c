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

/*DELETE NUMBERS
Author:??
Date:10/31*/
int main()
{
	int a[100000],i,n,k,j,count = 0;					     

	    cin>>n;												//????????
	for(i = 0; i < n; i++)
	{
		cin >> a[i];									    //???????
	}  
	    cin >> k;										    //??????
	for(i = 0, j = 0; j < n; j++)
	{
		if(a[j] != k)
		{
			a[i] = a[j];
			i ++;
		}
		else
			count++;									    //?????????                                        //???????????
	}
	for(i = 0; i < n - count-1; i++)
	{
		cout << a[i] << " ";
	}
	if(i == n - count - 1) cout << a[i];
	return 0;
}
