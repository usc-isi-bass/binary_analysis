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
 * 4.cpp
 *????????????????
 *  Created on: 2012-10-26
 *      Author: ???
 */

int main()
{
	int n,i,a[101],b[101],h=0,t=0,m[101];       //????
	cin>>n;
	for(i=1;i<=n;i++)                           //??
	{
		cin>>a[i]>>b[i];                     //????
		if(90<=a[i]&&a[i]<=140&&60<=b[i]&&b[i]<=90)    //??????
		{
			h++;                                    //????1
			m[i]=h;               //m???????
		}
		else                          // ???????
		{
			m[i]=h;               //????????m???????
			h=0;                 //????????
		}
	}
	t=m[1];                             //t?????m1
	for(i=1;i<=n;i++)                                 
	{
		if(t<=m[i])                                
		{
			t=m[i];
		}                         //??t????????t???????
    }
	cout<<t;
	return 0;
}
