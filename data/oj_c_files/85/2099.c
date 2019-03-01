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

int main ()
{
	int n,i,j;
	char a[60];
	cin >>n;
	for ( i=0;i<n;i++)
	{
		cin >>a;
		if (a[0]!='_'&&((a[0]<='Z'&&a[0]>='A')==0)&&((a[0]<='z'&&a[0]>='a')==0))
			cout <<"no"<<endl;
		else 
		{
			for ( j=0;a[j]!='\0';j++)
			{
				if (a[j]!='_'&&(a[j]>'Z'||a[j]<'A')&&(a[j]>'z'||a[j]<'a')&&(a[j]>'9'||a[j]<'0'))
				{
					cout <<"no"<<endl;
					break;
				}
			}
			if (a[j]=='\0')
				cout <<"yes"<<endl;
		}
	}

	return 0;
}