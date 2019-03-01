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

/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         
*/


int main()
{ 
	int a, k = 0;
	cin >> a;
    if (a % 3 ==0 && a % 5 ==0 && a % 7 ==0 )
    {
		cout << "3 5 7";
		k+=1;
	}
    if (a % 3 !=0 && a % 5 ==0 && a % 7 ==0 )
    {
		cout << "5 7";
		k+=1;
	} if (a % 3 ==0 && a % 5 !=0 && a % 7 ==0 )
    {
		cout << "3 7";
		k+=1;
	} if (a % 3 ==0 && a % 5 ==0 && a % 7 !=0 )
    {
		cout << "3 5";
		k+=1;
	} if (a % 3 !=0 && a % 5 !=0 && a % 7 ==0 )
    {
		cout << "7";
		k+=1;
	} if (a % 3 ==0 && a % 5 !=0 && a % 7 !=0 )
    {
		cout << "3";
		k+=1;
	} if (a % 3 !=0 && a % 5 ==0 && a % 7 !=0 )
    {
		cout << "5";
		k+=1;
	}
	if (k==0)
		cout <<"n";
return 0;
}