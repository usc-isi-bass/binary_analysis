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
 * biaozhun.cpp
 *
 *  Created on: 2010-11-24
 *      Author: lz
 */

int main()
{
	int n;
	int i;
	char c[105][85];
	cin>>n;
	for(i=0;i<=n;i++)
		cin.getline(c[i],85);//?????????
	for(i=1;i<=n;i++)
	{
		int j=0;
		if(c[i][j]!='_'&&(c[i][j]<'A'||c[i][j]>'z'||(c[i][j]>'Z'&&c[i][j]<'a')))//??????
			cout<<"0"<<endl;
		else
		{
			j++;
			while(c[i][j]!='\0')
			{
				if(c[i][j]!='_'&&(c[i][j]<'0'||c[i][j]>'9'&&c[i][j]<'A'||c[i][j]>'Z'&&c[i][j]<'a'||c[i][j]>'z'))
					//????
				{
					cout<<"0"<<endl;
					break;
				}
				else
					j++;
			}
			if(c[i][j]=='\0')//??????
				cout<<"1"<<endl;
		}
	}
	return 0;
}
