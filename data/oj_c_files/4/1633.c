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
	int array[100][100] ;
	int row ,col ;
	cin>>row >> col ;
	int i , j ;
	for(i = 0 ;i < row ;i ++)
		for(j = 0 ;j < col ;j++)
			cin>>array[i][j];
	j = 0 ;
	for(i = 0 ;i < row ;i++)
	{
		if(i==0)
		{
			while(j <= col - 1)
			{
				cout<<array[i][j]<<endl ;
				for(int k = i + 1; k < row; k++)
				{
					if(i+j-k>=0)
						cout << array[k][i+j-k]<<endl ;
				}
				j ++ ;
			}
		}else
		{
			j = col - 1 ;
			cout<<array[i][j]<<endl ;
			for(int k = i + 1; k < row; k++)
			{
				if(i+j-k>=0)
					cout << array[k][i+j-k]<<endl  ;
			}
		}			
	}
}
