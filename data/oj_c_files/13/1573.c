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

//*************************************************
//***???????????***
//***??????***
//***???2012.12.19***
//*************************************************
int main ()
{
	int n,i,a[20000],b[100];
	memset(b,0,sizeof(b));
	cin >> n;
	for (i = 0; i < n; i++)        //????
	{
		cin >> a[i];
	}
	cout << a[0];                  //a[0]????
	b[a[0]] = 1;
	for (i = 1; i < n; i++)        
	{
		if(b[a[i]] == 0)           //???????????
		{
			cout << " " << a[i];
			b[a[i]] = 1;          //???????????
		}
	}
	return 0;
}