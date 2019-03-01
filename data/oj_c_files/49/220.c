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
 * huiwenzilie.cpp
 *
 *  Created on: 2010-12-19
 *      Author: lz
 */

int main()
{
	char c[600];
	cin>>c;
	int p;
	int q;
	int i;
	int j;
	int zilen;
	int len=strlen(c);
	for(zilen=2;zilen<=len;zilen++)//???????
		for(i=0;i<=len-zilen;i++)//???????????
		{
			p=i;//????????
			q=i+zilen-1;//????????
			while(p<q)//???????
			{
				if(c[p]==c[q])
				{
					p++;
					q--;
				}
				else
					break;
			}
			if(p>=q)
			{
				for(j=i;j<i+zilen;j++)
					cout<<c[j];
				cout<<endl;
			}
		}
	return 0;
}
