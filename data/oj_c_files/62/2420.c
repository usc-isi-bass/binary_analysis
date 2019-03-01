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

char c[1000];
int i=0;
int main( )
{
	cin>>c[0];
	cout<<c[0];
	while(c[i]!='\n')
	{
		i++;
		c[i]=cin.get( );
		
	}

	
	i=1;
	while(c[i]!='\n')
	{
		
		
		if(c[i]==' ')
			{   ++i;
				continue;
		    }
		if(c[i]!='\0'&&c[i-1]!=' ') cout<<c[i];
		if(c[i]!='\0'&&c[i-1]==' ') cout<<" "<<c[i];
	    i++;
	}
	
	return 0;
}

