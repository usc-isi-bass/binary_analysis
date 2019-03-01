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
 * lt12.3bijiaozifu.cpp
 *
 *  Created on: 2011-10-27
 *      Author: Dai Guangda
 */
int main()
{
	int i;
	char a[80],b[80];
	cin.getline(a,80);         //???????
	cin.getline(b,80);
	for (i=0; i<strlen(a); i++)
	{
		if
		(
			a[i] == b[i] ||
			a[i]>='A' && a[i]<='Z' && b[i]==a[i]+32 ||
			a[i]>='a' && a[i]<='z' && b[i]==a[i]-32
		)
			continue;              //???????????????????
		else
		{
			if (
				(a[i]<'A' || a[i]>'z') && a[i] > b[i] ||
			    a[i]>='A' && a[i]<='Z' && a[i]<b[i] && a[i]>b[i]-32 ||
			    a[i]>='a' && a[i]<='z' && a[i]>b[i] && a[i]<b[i]+32
				) cout <<'>'; //a??b?????
			else cout <<'<';
			break;
		}               //???????????????????
	}
	if (i == strlen(a))           //?a??????
		if (i < strlen(b)) cout <<'<';    //?b????????????'<
		else cout <<'=';  //?????????‘=’
	return 0;
}
