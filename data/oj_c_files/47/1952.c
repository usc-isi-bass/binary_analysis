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
 *???redo.cpp
 *????????
 *????: 2012-12-10
 *?????1200012825
 */

int main(void)
{
	int n;
	cin>>n;
	int *p=NULL,a[100],*q=NULL;
	for(q=a;q<=a+n-1;q++){
		cin>>*q;//??
	}
	cout<<*(p=a+n-1);
	for(p=a+(n-2);p>=a;p--){
		cout<<" "<<*p;//????
	}
	return 0;
}
