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
	int n,i,j;
	char a[50][33];
	cin >> n;
	cin.ignore ();
	for(i=0 ; i< n ; i++)
		cin >> a[i];
	for(i=0 ; i< n ; i++)
	{
		j = strlen(a[i]);
		if(a[i][j-2] == 'e')
		{
			if(a[i][j-1] == 'r')
				a[i][j-2] = '\0';
		}
		if(a[i][j-2] == 'l')
		{
			if(a[i][j-1] == 'y')
				a[i][j-2] = '\0';
		}
		if(a[i][j-3] == 'i')
		{
			if(a[i][j-2] == 'n' &&
				a[i][j-1] == 'g')
				a[i][j-3] = '\0';
		}
		cout<<a[i]<<endl;
	}
	return 0;
}