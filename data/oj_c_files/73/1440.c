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
 * homework.cpp
 *
 *  Created on: 2013-10-30
 *      Author: dyx
 */
int main()
{
	int juzheng[5][5];
	int i,j,k;
	int a,b=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin >> juzheng[i][j];
	int max;
	for(i=0;i<5;i++)//i???j??
	{
		max=0;
		for(j=0;j<5;j++)
		{
			if(max<juzheng[i][j])
				max=juzheng[i][j];

		}
		for(j=0;j<5;j++)
		{
			if(juzheng[i][j]==max)
			{
				a=0;
				for(k=0;k<5;k++)
					if(juzheng[i][j]>juzheng[k][j])
						a++;

				if(a==0)
				{
					cout << i+1<<" "<< j+1 << " " << max;
					b++;
				}
			}
		}




	}
	if(b==0)
		cout << "not found";
















}

