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
 * 11.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */

int main()
{
	int a,b,x[22][22];
	cin>>a>>b;
	for ( int i=0 ;i<=a+1; i++ )
			for ( int j=0;j<=b+1;j++ )
				x[i][j]=-1;
	for ( int i=1 ;i<=a; i++ )
		for ( int j=1;j<=b;j++ )
			cin>>x[i][j];
	//cout<<x[4][0]<<endl;
//	for ( int i=1 ;i<=a; i++ )
//			for ( int j=1;j<=b;j++ )
//				cout<<x[i][j];
	for ( int k=1 ;k<=a; k++ )
			for ( int l=1;l<=b;l++ )
			{
				if ( (x[k][l]>=x[k-1][l])&&(x[k][l]>=x[k+1][l])&&(x[k][l]>=x[k][l-1])&&(x[k][l]>=x[k][l+1]))
				{
					//cout<<x[k][l]<<endl;
					cout<<k-1<<' '<<l-1<<endl;
				}
			}
	return 0;
}
