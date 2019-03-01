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
 * 123.cpp
 *
 *  Created on: 2013-11-29
 *      Author: 13248
 */

/*
 * 20131129.cpp
 *
 *  Created on: 2013-11-29
 *      Author: 13248
 */

void jiaogu(int x)
{
	if(x==1) {cout<<"End"<<endl;return;}
	else
	{
		if(x%2==1) {cout<<x<<"*3+1="<<x*3+1<<endl;return jiaogu(x*3+1);}
		else
		{
			cout<<x<<"/2="<<x/2<<endl;return jiaogu(x/2);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	jiaogu(n);
	return 0;
}
