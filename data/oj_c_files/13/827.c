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
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-10-19
 *      Author: Li Wenpeng
 */
int main()
{
	int n,a[20001],p[200],x,step=-1;
	cin>>n;
	memset(p,0,sizeof(p));
	memset(a,0,sizeof(a));
	for (int i=0;i<n;i++)                //????
	{
		cin>>x;
		if (p[x]==0)                     //?????????????????
				{
			step++;                      //????????1
			a[step]=x;
			p[x]=1;                      //???x?????
				}
	}
	cout<<a[0];
	for (int j=1;j<=step;j++) cout<<' '<<a[j];
	return 0;
}

