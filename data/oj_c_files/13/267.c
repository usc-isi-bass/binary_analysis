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

//*****************************
//????????????    *
//?????????          *
//??????                *
//??:2010.10.29             *
//*****************************


int main()
{
	int n,j = 0 , m = 0;
	cin>>n;
	int a[100000];
	int b[100000];
	for(int k =0 ; k < n ; k++ )
	{
		cin>>a[k];
	}
	for(int i = 0 ; i<n ; i++)
	{
		int count= 0;
		for(int l = 0 ; l<i ; l++)
		{
			if(a[l]==a[i])
			{
				count = 1 ;
				m = m + 1 ;
				break;
			}
			
		}
		if(!count)
		{
			b[j] = a[i] ;
		    j++;
		} 
	}
	for(int h = 0 ; h<(n-m) ; h++)
	{
		if(h==0)
			cout<<b[h];
		if(h>0)
			cout<<" "<<b[h] ;
	}
	return 0;
}
		