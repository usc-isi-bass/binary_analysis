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

//****************************************
//*??:    ????             ** 
//*??: ???      		    **
//*???2011  11 15              **
//****************************************
int i , l ;
char str[501];      //??????? 

void f(int num,int len)        //???? 
{
	if(len <= 0 )     //?length?????????????
	{
		int j ;
		for(j = i ; j < i + l ; j++)
			cout << str[j];
		cout << endl;
	}
	else
	{
		if( str[num] == str[num + len - 1] )    //???????? 
			f(num + 1 , len - 2);    //?????? 
	}
}

int main()
{
	int lenth;           //?????? 
	cin.getline( str , 501 );         //?????? 
	lenth = strlen(str);         //???????? 
	for( l = 2 ; l <  lenth  ; l++)
		for( i = 0 ; i+l-1 <= lenth ; i++)//?? 
			f(i , l); //???? 
	return 0;
}