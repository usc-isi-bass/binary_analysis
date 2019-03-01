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

	char a[101] ;
	char b[101] ;
	cin.getline(a,101) ;
	int length = strlen(a) ;
	for(int i = 0 ; i<(length - 1) ; i++)
	{
		b[i] = a[i] + a[i+1] ;
		cout<<b[i] ;
	}
	cout<<(char)(a[length-1]+a[0]) ;
	return 0 ;
}
	