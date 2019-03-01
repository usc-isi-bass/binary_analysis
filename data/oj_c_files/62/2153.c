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
	char a[10000];
	gets( a );

	int flag=0;
	int i;

	for ( i=0;a[i]!='\0';i++)
	{
		if( flag ==0 )
		{
			cout << a[i] ;
			if( a[i] ==' ')
				flag = 1;
		}
		else if ( (flag==1)&&(a[i]!=' ')  )
		{
			cout << a[i];
			flag = 0;
		}
	}

	cout << endl;
	return 0;
}
