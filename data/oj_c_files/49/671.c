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
	char a[501];//????
	cin.getline( a, 501 );// ??
	int length=strlen(a), p=1;
	for( int i=2; i<length; i++ )//?????
	{
		for( int j=0; j<length-i+1; j++ )//??????
		{
		    p=1;
			for( int x=0; x<i; x++ )// ??????
		    {
		    	if(a[j+x]!=a[j+i-x-1])
		    	{
		    		p=0;
		    		break;
		    	}
		    }
		    if(p==1)
		    {
		    	for( int y=0; y<i; y++ )//????
		    	{
		    		cout << a[j+y];
		    		if( y==i-1 )
		    			cout << endl;
		    	}
		    }
		}
	}

    return 0;
}