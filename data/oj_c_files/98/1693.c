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
	int len;
	cin >> n;
	cin.get();
	char str[42];
	cin >> str;
	cout << str;
	int num=strlen(str);
	n=n-1;
	while(n--)
	{
		cin>> str;
		len=strlen(str);
		num=num+len+1;
		if(num<=80)
			cout<<' '<<str;
		else
		{
			cout<<endl;
			cout<<str;
			num=len;
		}
	}
	return 0;
}