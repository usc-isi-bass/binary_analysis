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
 * qimofuxi_03.cpp
 *  ???????
 *  Created on: 2010-12-17
 *      Author: william
 */
int operation(int x)
{
	if(x%2==0)
    {
		cout<<x<<"/2="<<x/2<<endl;
		return x/2;
    }
	else
	{
		cout<<x<<"*3+1="<<3*x+1<<endl;
		return 3*x+1;
	}
}
int main()
{
    int x;
    cin>>x;
    for(;x!=1;)
    {
    	x=operation(x);
    }
    cout<<"End";
    return 0;
}
