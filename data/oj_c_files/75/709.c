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

//**************************
//*????????  **
//*?????? 1200012888 **
//*???2013.10.30**
//**************************
int main()
{
	char c ;							//????????c ?????
	int start[1000] = {0} ;				//????????start 
	int end[1000] = {0} ;				//????????end
	int person[1000] = {0} ;			//??????person
	int count = 0 ;						//???? count ??????
	while(1)
	{
		cin >> start[count] ;			//????????
		c = cin.get() ;					//???????c
		count ++ ;						//???+1
		if (c != ',')					//??c??','??????????
		{
			break ;						//????
		}
	}
	for (int i = 0 ; i < count ; i++)	//????????
	{
		if (i < count - 1)				
		{
			cin >> end[i] ;
			cin >> c ;
		}
		else
		{
			cin >> end[i] ;
		}
	}
	for (int i = 0 ; i < 1000 ; i++)	//??????????????
	{
		for (int j = start[i] ; j < end[i] ; j ++)
		{
			person[j] ++ ;				
		}
	}
	int max = 0 ;
	for (int i = 0 ; i < 1000 ; i++)	//?????????????
	{
		if (max < person[i])
		{
			max = person[i] ;
		}
	}
	cout << count << " " << max << endl ;
										//?? ????? ? ???????????
	return 0 ;

}