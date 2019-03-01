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
 *???round.cpp
 *???????
 *??: 2012-12-12
 *?????1200012825
 */

int main(){
	int n,m;
	cin>>n>>m;
	int *p=NULL,a[300];
	for(p=a;p<a+n;p++){
		cin>>*p;//????
	}
	for(p=a;p<a+n-m;p++){
		*(p+n)=*p;
	}
	for(p=a;p<a+n;p++){
		*p=*(p+n-m);//????
	}
	cout<<*a;
	for(p=a+1;p<a+n;p++){
		cout<<" "<<*p;//??
	}
	cout<<endl;
	return 0;
}
