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
	int n,m;
	cin>>n>>m;
	int a[100];
	int *p=a;
	for(;p<=a+n-1;p++)
		cin>>*p;
	for(p=a+n-1;p>=a;p--)
		*(p+m)=*p;
	for(p=a+n;p<=a+n+m-1;p++)
		*(p-n)=*p;
	p=a;
	cout<<*p++;
	for(;p<=a+n-1;p++)
		cout<<" "<<*p;
}