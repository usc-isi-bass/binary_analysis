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
 * wenzi.cpp
 *
 *  Created on: 2012-12-7
 *      Author: ada
 */
int main()
{
	int n ;
	cin>>n;
	char a[1000][41];
	for(int i = 0 ; i <= n ; i++)
	{
		cin>>a[i];
	}
	int len = (int)strlen(a[0]) ;

	cout<<a[0];
	 for(int i  = 1 ; i < n ; i++)
	 {
		 len = len + (int)strlen(a[i])+1;
		 if(len<=80)
		 {

			 cout<<" "<<a[i];
		 }
		 else
		 {
			 cout<<endl<<endl<<a[i];
			 len = (int)strlen(a[i]);

		 }
	 }
	 return 0 ;
}
