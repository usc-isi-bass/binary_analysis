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

//****************************************
//*???????                            **
//*????? 1100013004                     **
//*???2010.11.14                          **
//****************************************
int a,b;
int even(int a)
{
	b = a / 2;
	cout<<a<<"/"<<2<<"="<<b<<endl;
	return b;
}
int odd(int a)
{
	b = a * 3 + 1;
	cout<<a<<"*"<<3<<"+"<<1<<"="<<b<<endl;
	return b;
}
int main() 
{
    int a;
	cin>>a;
	if(a == 1)
		cout<<"End"<<endl;
	else
	{
		while (a > 1)
		{
			if( a % 2 == 0)
			{
				a = even(a);
			}
			else
			{
				a = odd(a);
			}
		}
		cout<<"End"<<endl;
	}
    return 0;
} 
