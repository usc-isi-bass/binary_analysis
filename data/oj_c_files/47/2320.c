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

int print();
int main()
{
	int m;
	char c;
	cin>>m;
	c=cin.get();
	print();
	return 0;
}
int print()
{
	int a;
	char c='\0';
	cin>>a;
	c=cin.get();
	if(c!='\n')
		print();
	if(c!='\n')
		cout<<c;
	cout<<a;
	return 0;
}
