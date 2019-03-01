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

//********************
//*****?????*****
//**?? 1100012915***
//*******11.7*********
//********************
int main()
{
	int i,first;//first???????
	int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};//?????
	int every13[13];//??????13?????
	cin >> first;
	every13[1] = first + 12 % 7 ;//??????
	if ( every13[1] > 7 )
		every13[1] = every13[1] - 7 ;//??7????7
	for ( i = 2 ; i <= 12 ; i ++ )//??2~12?13?????
	{
		every13[i] = every13[i - 1] + mon[i - 1] % 7 ;
		if ( every13[i] > 7)
			every13[i] = every13[i] - 7;
	}
	for ( i = 1 ; i <= 12 ; i ++ )
		if ( every13[i] == 5 )//????????????????
			cout << i <<endl;
	return 0;
}