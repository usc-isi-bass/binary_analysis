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
	char c[1005];
	int num=0;
	cin>>c;
	
	for( int i=0 ; i<strlen(c) ; i++ )
	{
		if( c[i]<='z' &&c[i]>='a' )
		{
			c[i]=c[i]-'a'+'A';
		}
	}
	if( c[0]!= c[1] )
	{
		cout<<"("<<c[0]<<",1)";
	}
	else
	{
		num++;
	}
	for( int i=1 ; i<strlen(c) ; i++ )
	{
		num++;
		if( c[i]!= c[i+1] )
		{
			cout<<"("<<c[i]<<","<<num<<")";
			num=0;
		}
	}
}