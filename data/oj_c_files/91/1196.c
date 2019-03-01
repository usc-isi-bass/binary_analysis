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

int main()
{
	char a[101],b[101];
	int n,i;
	cin.getline(a,101);
	for(i=1;i<101;i++)
	{
		if(a[i]=='\0')
		{
			n=i;
			b[i-1]=a[i-1]+a[0];
			break;
		}
		else
			b[i-1]=a[i-1]+a[i];
	}
	for(i=0;i<n;i++)
		cout<<b[i];
	cout<<endl;
	return 0;
}