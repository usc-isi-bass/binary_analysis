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
 * 2.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	char a[1001],temp;
	int i,len,num=1;
	cin >>a;
	len = strlen(a);
	if (a[0]>='a' && a[0]<='z')
		temp = a[0]-32;
	else temp = a[0];
	for (i=1; i<=len; i++)
	{
		if (a[i]>='a' && a[i]<='z') a[i]=a[i]-32;
		if (temp == a[i])
				num++;
		else
		{
			cout <<'(' <<temp <<',' <<num <<')';
			temp = a[i];
			num = 1;
		}
	}
	return 0;
}
