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
* @file   ???????? .cpp  
* @author ???  
* @date   2013-10-31
* @description 
*          ??????: ????????   */ 
int main ()
{
	int a[100001],num,c ;
	cin >> num ; 
	
    for (int i=0;i<num;i++)
	{
		cin >> a[i] ;
	}
	cin >> c ;
	for(int q=0 ;q<num;q++)
	{
		if(a[q]==c)
		{
			for(int p=q;p<num;p++)
			{
				a[p]=a[p+1];
			}
			num=num-1;
			q=q-1;
		}
	}
	for(int j=0;j<(num-1);j++)
	{
		cout << a[j] << " " ;
	}
	cout << a[num-1] ;
	return 0 ;
}
