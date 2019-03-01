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

void setin(char a[11],char b[4])
{
	int i,stop=0,max;
	max=(int)a[0];
	for(i=0;a[i]!='\0';i++)
	{
		if((int)a[i]>max)
		{
			max=(int)a[i];
			stop=i;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(i==stop)
		{
			cout << a[i];
			cout << b;
		}
		else cout <<a[i];
	}
	cout << endl;
}
int main()
{
	char a[11]={'\0'},b[4]={'\0'};
	while(cin >> a>>b)
	{
		setin(a,b);
	}
	return 0;
}