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
	char sentence[100] ;
	char *pos = NULL ;
	cin.getline(sentence , 100) ;
	int len = strlen(sentence) ;
	cout << sentence[0] ;
	for ( pos = &sentence[1] ; pos < &sentence[len] ; pos++ )
	{
		if ( *pos == ' ' && *(pos-1) == ' ' )
			continue ;
		else 
			cout << *pos ;
	}
	cout << endl ;
	return 0 ;
}
