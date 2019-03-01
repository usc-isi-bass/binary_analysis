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

/*
*????111114 05.cpp
*??????
*?????2011-11-14
*?????????????
*/

int main( )
{
	int n,k,i=1,j;     //????
	cin>>n>>k;     //????
	int f[n+1];     //????
	while(i>0)     //??????????
	{
		f[0]=(n-1)*i;     //?????
	    for(j=1;j<n+1;j++)     //????
	    {
		    if(f[j-1]%(n-1)!=0) break;
	    	f[j]=f[j-1]*n/(n-1)+k;
	    }
	    if(j==n+1) break;     //???????
	    i=i+1;
	}
	cout<<f[n]<<endl;     //??
	return 0;
}