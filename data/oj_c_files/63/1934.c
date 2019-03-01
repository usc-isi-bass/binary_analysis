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
	int  a[102][102], b[102][102], c[102][102]={0} , x1, y1, x2, y2, i, j, k ;
	cin >> x1 >> y1;
	
	for(i = 1; i <= x1; i++ )
	{
		for(j = 1; j <= y1; j++)
		{
			cin >> a[i][j];	
			
		}
	}
	
	cin >> x2 >> y2;
	for(i = 1; i <= x2; i++ )
	{
		for(j = 1; j <= y2; j++)
		{
			cin >> b[i][j];	
			
		}
	}
	for(i = 1; i <= x1; i++ )
	{
		for(j = 1; j <= y2; j++)
		{
			k = 1;
			while(k <= y1 )
			{
				c[i][j]+= a[i][k] * b[k][j];
				
				k++;
			}
			if(j < y2 )
				cout << c[i][j] << " " ;
				
			if(j == y2 )
				cout << c[i][j] << endl ;
				
			
		}
	}
					
	return 0;
}