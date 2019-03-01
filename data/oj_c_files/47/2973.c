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


int main(){
	int n;
	cin>>n;
	int a[100];
	int *p=a,*q=a;
	for(;p<a+n;p++)
		cin>>*p;
	int temp;
	for(p--;q<p;q++,p--)
	{
		temp=*q;
		*q=*p;
		*p=temp;
	}
	p=a;
	cout<<*p++;
	for(;p<a+n;p++)
		cout<<" "<<*p;
}