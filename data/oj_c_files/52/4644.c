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
	int a[100],*p=NULL,*q=NULL,i,n,m,x;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=1;i<=m;i++){
		x=a[n-1];
		p=&a[n-1];
		for(;p!=&a[0];p--) *p=*(p-1);
		*(p--)=x;
	}
	for(i=0;i<n-1;i++)cout<<a[i]<<" ";
	cout<<a[i];
	return 0;
}