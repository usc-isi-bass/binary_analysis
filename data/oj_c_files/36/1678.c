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
 * 09.cpp
 *
 *  Created on: 2014-1-5
 *      Author: Administrator
 */
int main()
{
	char a[100],b[100];
	int i,j;
	int s1,s2;
	cin>>a>>b;
	s1=strlen(a);
	s2=strlen(b);
	if(s1!=s2)
		{
		cout<<"NO"<<endl;
	    return 0;
		}
	else
	{
		for(i=0;i<s1;i++)
			for(j=0;j<s1;j++)
			{
				if(b[j]==a[i])
				{
					b[j]='*';
					break;
				}
			}
		for(i=0;i<s1;i++)
			if(b[i]!='*')
			{
				cout<<"NO"<<endl;
				return 0;
			}
		cout<<"YES"<<endl;
		return 0;
	}

}
