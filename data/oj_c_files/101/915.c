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
 * fanliang.cpp
 *
 *  Created on: 2012-10-26
 *      Author: 7
 */
int main()
{
	int a[3],i,j,temp;char c;
	char b[3]={'A','B','C'};
	for(a[0]=1;a[0]<4;a[0]++)
	{
		for(a[1]=1;a[1]<4;a[1]++)
		{
			for(a[2]=1;a[2]<4;a[2]++)
			{
				if((a[1]>a[0])+(a[2]==a[0])==3-a[0]&&(a[0]>a[1])+(a[0]>a[2])==3-a[1]&&(a[2]>a[1])+(a[1]>a[0])==3-a[2])
				{
				     goto loop;
				}
			}
		}
	}
	loop:for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
			}
		}
	}
	cout<<b[0]<<b[1]<<b[2];
}
