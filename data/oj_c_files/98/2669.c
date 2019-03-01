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
	char a[50];
	char *p = NULL;
	int i,len = 0,l,n,num = 0;
	p = a;
	cin >> n;
	while(cin >> a)
	{
		
		l = strlen(a);
		num ++;
		len += l;
		if ( len > 80 )  
		{
			cout << endl; 
			len = l;
			num = 1;
		}
		else if( num != 1 ) cout <<' ';
		for ( i = 0; i < l; i ++ )
		{
			cout<<*(p + i);
		}
		len ++;
	}
	return 0;
}
