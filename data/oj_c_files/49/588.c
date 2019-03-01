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
 * 12-6huiwen.cpp
 *
 *  Created on: 2011-12-30
 *      Author: Dai Guangda
 */
int main()
{
	char a[501];
	int start,end,zlen,i,j,len;
	cin >>a;
	len = strlen(a);
	for (zlen=2; zlen<=len; zlen++)
	{
		for (start=0; start<=len-zlen; start++)
		{
			end = start+zlen-1;
			i=start; j=end;
			while (a[i]==a[j] && i<j)
			{
				i++;
				j--;
			}
			if (i>=j)
			{
				for(i=start; i<=end; i++)
					cout <<a[i];
				cout <<endl;
			}
		}
	}
	return 0;
}
