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
 * ???.cpp
 *
 *  Created on: 2010-11-23
 *      Author: acer
 */

int main()
{
	int a,b,i=0,j=0,k;					//ab?????????ij??????????
	int a_line[20],b_line[20];			//?????????ab???
	cin>>a>>b;
	while(a!=0)							//?????
	{
		a_line[i]=a;
		a=a/2;
		i++;
	}
	while(b!=0)
	{
		b_line[j]=b;
		b=b/2;
		j++;
	}
	if(i>j)								//??ab???????
	{
		for(k=0;k<j;k++)
			if(a_line[i-j+k]==b_line[k])//????????????????Break
			{
				cout<<b_line[k];
				break;
			}
	}
	else								//???????
		for(k=0;k<j;k++)
			if(b_line[j-i+k]==a_line[k])
			{
				cout<<a_line[k];
				break;
			}
	return 0;
}
