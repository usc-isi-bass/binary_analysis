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
 * huiwenzichuan.cpp
 *
 *  Created on: 2011-12-21
 *      Author: Administrator
 */
int main()
{
	char chuan[500];
	cin>>chuan;
	int lenth=strlen(chuan);
	int i,j;
	for(int k=1;k<lenth;k++)
	{
		for(i=0,j=k;j<lenth;i++,j++)
		{
			int begin=i,end=j;
			while(begin<end)
			{
				if(chuan[begin]!=chuan[end])
				{
					break;
				}
				else
				{
					begin++;
					end--;
				}
			if(begin>=end)
			{
				for(int a=i;a<=j;a++)
				{
					cout<<chuan[a];
				}
				cout<<endl;
			}
			}
		}
	}
	return 0;
}