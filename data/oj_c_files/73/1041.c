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

//************************************************************************
//*???7-4.cpp                                                         
//*???????                                                     
//*??????                                                          
//*???2013?11?10?                                                   
//************************************************************************
int main()
{
	int a[7][7], i, j , k,  flag  , max, maxj;
	
	for(i = 0; i < 5; i++ )
	{
		for(j = 0; j < 5; j++)
		{
			cin >> a[i][j];	     //??????					
		}
	}
	for(i = 0; i < 5; i++ )
	{
		max = a[i][0];            //??????????????
		maxj = 0;                 //???????
		flag = 1;                 //??????
		for(j = 0; j < 5; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];     //??????????????
				maxj = j;
			}
		}
		for(k = 0; k < 5; k++)    //????????????
		{
			if(a[k][maxj] < max)
			{
				flag = 0;       //????????????????
				break;
			}
		}
		if(flag)              //???????????????????
		{
			cout << i + 1 << " " << maxj + 1 << " " << a[i][maxj] << endl;				
			break;
		}
	}
	if(!flag)    //???????????????????
		cout << "not found" << endl; 
	return 0;
}