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
 * yi.cpp
 *
 *  Created on: 2012-10-20
 *      Author: 7
 */
int main()
{
	char s[500];
	int left[500];
	cin>>s;
	int l,i=0,k=0;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==s[0])
		{
			left[k]=i;
			k++;
		}
		else
		{
			k--;
			cout<<left[k]<<" "<<i<<endl;
		}
	}
}
