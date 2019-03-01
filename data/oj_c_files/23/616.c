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
	char a[101];
	cin.getline(a,100);
	char b[100][150];
	int sum=0,i=0,j=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			sum=sum+1;
			j=0;
			continue;
		}
		else
		{
			b[sum][j]=a[i];
			j=j+1;
		}
	}
	cout <<b[sum];
	for(i=sum-1;i>=0;i--)
		cout <<" " <<b[i];
	cout <<endl;
	return 0;
}
