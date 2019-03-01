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
    char z[30],*p;
	gets( z );
	p=z;
	int i;
	for ( i=0 ; z[i]!='\0' ; i++ )
	{
		if ( *(p+i)>='0'&&*(p+i)<='9' )
		{
			if ( ( *(p+i-1)>'9'||*(p+i-1)<'0' )&&i!=0 )
				cout<<endl;
			cout<<*(p+i);
		}
	}
	cout<<endl;
	return 0;
}
