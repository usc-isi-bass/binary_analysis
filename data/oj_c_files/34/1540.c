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
	int a;
	cin>>a;
	if (a==1)
	{
		cout<<"End"<<endl;
	}
	else
	{
		do
		{
			if (a%2==0)
			{
			    cout<<a<<"/2=";
			    a=a/2;
			    cout<<a<<endl;
			}
		    else
			{
			    cout<<a<<"*3+1=";
			    a=a*3+1;
			    cout<<a<<endl;
			}
		}while (a>1);
	    cout<<"End"<<endl;
	}
return 0;
}