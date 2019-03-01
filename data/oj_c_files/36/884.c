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
 * ??????.cpp
 *
 *  Created on: 2010-12-31
 *      Author: ???
 */
int main()
{
	int n,lena,lenb,i,j;
	char a[1001],b[1001];
	cin>>a>>b;
	lena=strlen(a);
	lenb=strlen(b);
	n=0;
	if (lena==lenb)
	{
		for (i=0;i<lena;i++)
			for (j=0;j<lena;j++)
			{
				if (a[i]==b[j])
				{
					n=n+1;
					b[j]='\0';
					break;
				}
			}
		if (n==lena)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else cout<<"NO"<<endl;
	return 0;
}