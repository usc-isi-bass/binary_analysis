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
	int n;
	int a, b;
	int num[100000];
	cin>>n;
	memset(num,0,sizeof(num));
	while( cin>>a>>b && !( a == 0 && b == 0 ) )
	{
		num[b]++;
	}
	for( int i = 0 ; i < n ; i ++ )
	{
		if( num[i] == n - 1 ) { cout<<i<<endl; return 0; }
	}
	cout<<"NOT FOUND"<<endl;
	return 0;

}
