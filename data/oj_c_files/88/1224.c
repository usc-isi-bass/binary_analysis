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
	int n;
	char a[320];
	cin.getline(a,31,'\n');
	n=strlen(a);
	if('0'<=a[0]&&a[0]<='9')
	{cout<<a[0];}
	for(int i=1;i<n;i++)
	{
		if('0'<=a[i]&&a[i]<='9')
		{cout<<a[i];}
		else if(a[i-1]>='0'&&a[i-1]<='9')
		{cout<<endl;}
		else continue;
	}
	cout<<endl;
	return 0;
}