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

//*****************************************************************************
//??????????? 
//?????? 
//???9-27 
//*****************************************************************************

int main()
{
	int n;                 //???????n 
	int all[100];                   //????????????????????? 
	double suv[100];
	double rate[100];
	
	cin >> n;
	
	for(int i = 0; i < n ; i ++)          //??????????? 
	{
	cin >> all[i] >> suv[i];
	rate[i] = suv[i] / all[i];
	}
	
	for(int j = 1; j < n; j ++)
	{
		if(rate[j] - rate[0] > 0.05) 
		cout << "better" << endl;
		
		else if(rate[0] - rate[j] > 0.05)
		cout << "worse" << endl;
		
		else
		cout << "same" << endl;
	}
	return 0;
}
	
	
	 