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
* file : ??3 5 7???
* author:??? 1200012911
* time : 2012.9.29
*/

int main()
{
	int n, sum;           //????
	//cout  <<"???????" <<endl;      //????
	cin >> n ;                        //?????
	sum = (n%3 == 0) +(n%5 == 0) + (n%7 ==0) ;  //???????
	switch(sum)
	{
	case 0 : cout <<"n" ;break;          //n??3?5?7??
	case 1 : cout <<(n%3 ==0? "3":(n%5 == 0?"5":"7"));break;  //n??????????????
	case 2 : cout <<(n%3 !=0 ? "5 7" : (n%5 !=0 ? "3 7":"3 5")) ;break;
		//n???????????????
	case 3 : cout <<"3 5 7" ;break;   //n??????
	}                         
	cout <<endl;            //??
	return 0;
}                     //?????
