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
 * tiaoshenjishu.cpp
 *
 *  Created on: 2011-12-21
 *      Author: Administrator
 */
int main()
{
	int n,broke,times,last;
	cin>>n;
	while(n--)
	{
		cin>>broke;
		last=0;
		while(broke--)
		{
			cin>>times;
			if(last+times<60)
			{
				if(last+times+3<60)
				{
					last=last+3;
				}
				else
				{
					last=60-times;
				}
			}
		}
		cout<<60-last<<endl;
	}
	return 0;
}