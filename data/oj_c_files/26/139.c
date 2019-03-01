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
	int i,j;
	char a[101];
	cin.getline(a,101);
	for(i=2;a[i]!=0;i++)
	{
		if(a[i-1]==' ' && a[i-2]==' ')
		{
			for(j=i-2;a[j+1]!=0;j++)
			{
				a[j]=a[j+1];
			}
			a[j]=0;
			i--;
		}
	}
	for(i=0;a[i]!=0;i++)
		cout<<a[i];
	cout<<endl;

	return 0;
}