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
 * 004.cpp
 * name:?????
 *  Created on: 2011-12-25
 *      Author: 11029
 */
int main(){
	char a[101],b[101];
	int la,lb,i,n;
	cin>>n;
	getchar();
	while (n--)
	{
		cin.getline(a,101);
		cin.getline(b,101);
		la=strlen(a);
		lb=strlen(b);
		for (i=lb-1;i>=0;i--)
		{
			a[i+la-lb]-=(b[i]-'0');
			if (a[i+la-lb]<'0')
			{
				a[i+la-lb]+=10;
				a[i+la-lb-1]--;
			}
		}
		cout<<a<<endl;
		getchar();
	}
}
