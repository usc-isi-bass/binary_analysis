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
 * 16.cpp
 *??????
 *  Created on: 2012-10-18
 *      Author: ???
*/
int main()
{
	int m;
	cin>>m;
	for(int i1=3;i1<=m/2;i1=i1+2)
	{

	int t=1,p=1;
		for(int k1=2;k1<=sqrt(i1);k1++)
		{
			int q1=i1%k1;
			t=t*(q1!=0);
		}//????????????
		if(t==1)
		{
			int i2=m-i1;
			for(int k2=2;k2<=sqrt(i2);k2++)
					{
						int q2=i2%k2;
						p=p*(q2!=0);
					}//??????????
			if(p==1)
				cout<<i1<<" "<<i2<<endl;
		}

	}
		}
