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
	int n,i,j,num[50]={0};
	int *p;
	p=num;
	cin>>n;
	for(p=num+0;p<num+n;p++)
		cin>>*p;
	p=num+n-1;
	cout<<*p;
	for(p=num+n-2;p>=num+0;p--)
		cout<<" "<<*p;
	cout<<endl;
	return 0;
}

