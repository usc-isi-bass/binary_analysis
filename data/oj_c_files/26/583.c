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
	char a[100],b[100];
	cin.getline(a,100);
	int n;
	n = strlen(a);
	int flag = 0;
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
                           flag =0;
			b[j] = a[i];
			j++;
		}
		if((a[i]==' ')&&(flag==0))
		{
			b[j] = a[i];
			j++;
			flag = 1;
		}
		else
			continue;
	}
	int m;
	m = j;
	for(j=0;j<m;j++)
		cout<<b[j];
	return 0;
}