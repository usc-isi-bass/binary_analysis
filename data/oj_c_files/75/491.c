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
 * ???: 1000010191_39_8.cpp
 * ??: ???
 * ????: 2011-1-1
 * ??: ?????
 */


int main()
{
	int n=0;
	char ch;
	int s[2000],e[2000];
	int d[1001]={0};
	//??
	do
	{
		n++;
		cin>>s[n];
		ch=cin.get();
	} while (ch==',');
	for (int i=1;i<=n;i++)
	{
		cin>>e[i];
		cin.get();
	}
	//??
	for (int i=1;i<=n;i++)
		for (int j=s[i];j<e[i];j++) d[j]++;
	cout<<n<<' ';
	int max=0;
	for (int i=0;i<1000;i++)
		if (d[i]>max) max=d[i];
	cout<<max<<endl;
	return 0;
}
