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

//*******************
//*???????*
//*??????*
//*2011/11/14*
//*******************

int change(char a)					
{
	int b;
	if (( a <= '9' ) && ( a >= '0' ))
		b = a - '0';
	else if (( a >= 'a') && ( a <= 'z'))
		b = a - 'a' + 10 ;
	else 
		b = a - 'A' + 10 ;
	return b ;
} // ?????????????????

int main()
{
	int i = 0, j, num1, num2, m;		
	long ten = 0;	// ten???????
	char output[100];
	char chu, mo;
	cin >> num1;
	cin.get();
	
	while ((chu = cin.get()) != ' ')				
	{
		m = change(chu);	// ????
		ten = ten * num1;	// ?num1??????????????ten
		ten = ten + m;
	}
	
	cin >> num2;
	
	while (ten > 0)	
	{
		m = ten % num2;			
		if (m > 9)				
			mo = m - 10 + 'A';	
		else
			mo = m + '0';
		output[i] = mo;				
		i++ ;
		ten = ten / num2;
	} // ?????????????
	
	if (i == 0)			
		cout << "0" << endl ;
	else
		for (j = i - 1; j >= 0; j--)
			cout << output[j];	
	return 0;
}