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

int  main()		   //???
{
	int n,k,apple[10000];
	cin>>n>>k;             //??????????
	apple[1]=k;            //??????????
    int i=0;
    do
    {
		apple[1]=apple[1]+n;       //??????????????????n
		for(i=1;i<n;i++)           //???????????
		{
			apple[i+1]=apple[i]*n/(n-1)+k;
		}
        for (i=1; i<n; i++)      //?????????????
        {if( (apple[n]-k)%n!=0 ) break;
    	if ( apple[i]%(n-1) != 0 )
		break;	    // ??for??
		}
    } while( i<n-1 ); // ? i>=1 ???do??
    // ??????
	cout << apple[n] << endl;
    return 0;
}
