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
 * qmcy0501.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Administrator
 */
int main()
{
	char a[101];
	cin.getline(a,101);
	int i=0,j,m;
	while(true)
	{
		if(a[i]=='\0')
		{
			break;
		}
		else if(a[i]!=' ')
		{
			i++;
			continue;
		}
		else if(a[i]==' '&&a[i+1]!=' '&&a[i-1]!='\0')
		{
			i++;
			continue;
		}
		else
		{
			for(j=1;j<strlen(a);j++)
			{
				if(a[i+j]!=' ')
				{
					break;
				}
			}
			for(m=i+1;m<strlen(a)-j+2;m++)
			{
				a[m]=a[m+j-1];
			}
			i++;
		}
	}
	cout<<a<<endl;
	return 0;
}
