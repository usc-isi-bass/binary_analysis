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
 * wanyi.cpp
 *
 *  Created on: 2012-12-3
 *      Author: 7
 */
char a[150];
char b[150];
int sig[150];
int main()
{
	int i,k=0;
	while(cin>>a)
	{
		k=0;
		int l=strlen(a);
		for(i=0;i<l;i++)
			{
			b[i]=a[i];
				if(a[i]=='(')
				{
					b[i]='$';
					sig[k]=i;
					k++;
				}
				if(a[i]==')')
				{
					k--;
					if(k<0)
						{b[i]='?';k=0;}
					else
					{
						b[sig[k]]='a';
					}
				}
			}
		cout<<a<<endl;
		for(i=0;i<l;i++)
		{
			if(b[i]!='$'&&b[i]!='?')
				cout<<" ";
			else
				cout<<b[i];
		}
		cout<<endl;
	}
}
