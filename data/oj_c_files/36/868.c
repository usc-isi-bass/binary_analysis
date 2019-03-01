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
 * xiaoceyan4.3.cpp
 * ??????
 *  Created on: 2010-12-31
 *      Author: william
 */
void transfor(char a[], int ai)
{
	for(int i=0; i<ai ;i++)
		for(int j=0; j<ai-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				char temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
int main()
{
	char a[1000], b[1000];
	int ai, bi, i;
	cin>>a>>b;
	ai=strlen(a);
	bi=strlen(b);
	if(ai!=bi) cout<<"NO";
	else
	{
		transfor(a,ai);
		transfor(b,bi);
		for(i=0; i<ai; i++)
		{
			if(a[i]!=b[i]) break;
		}
		if(i==ai) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}