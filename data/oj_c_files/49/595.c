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
 * hwzc.cpp
 *
 *  Created on: 2011-12-30
 *      Author: miaomiao
 */
int main()
{
	char string[501];
	cin>>string;
	int length=strlen(string);
	int i,j;
	int k=1;
	while(k<length)
	{
		for(i=0,j=k;j<length;i++,j++)
		{
			int begin=i,end=j;
			while(begin<end)
			{
				if(string[begin]!=string[end])
					break;
				if(string[begin]==string[end])
				{
					begin++;
					end--;
				}
			}
			if(begin>=end)
			{
				int print=i;
				for(print;print<=j;print++)
					cout<<string[print];
				cout<<endl;
			}
		}
		k++;
	}
	return 0;
}

