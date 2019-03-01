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
 *  Created on: 2012-10-31
 *      Author: 7
 */
int main()
{
	int a[6][6];
	int i,j,k;
	int max[6],row[6],line[6];
	int sig=0,l;
	memset(max,0,sizeof(max));
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			if(max[i]<a[i][j])
			{
				max[i]=a[i][j];
				row[i]=i;
				line[i]=j;
			}
		}
	}
	for(i=1;i<6;i++)
	{
		for(k=1;k<6;k++)
				{
			l=line[i];
					if(max[i]>a[k][l])
					{
						break;
					}
					else if(k==5)
					{
						sig=1;
						cout<<row[i]<<" "<<line[i]<<" "<<max[i];
					}
				}
	}
	if(!sig)
	cout<<"not found";
}
