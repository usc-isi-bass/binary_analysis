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
	int a[100],*p=NULL;
	int n;
	cin>>n;
	for(p=a;p<n+a;p++)
		cin>>*p;
	for(p=a+n-1;p>a;p--){
		cout<<*p<<" ";
	}
	p=a;
	cout<<*p;
}
