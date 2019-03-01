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

void fun(int s)
{
	if(s==0)
		return;
	else
	{
		cout<<s%10;
		fun(s/=10);
	}
}
int main()
{
	int s;
	cin>>s;
	if(s==0)
		cout<<s;
	else
	    fun(s);
    return 0;
}
 
