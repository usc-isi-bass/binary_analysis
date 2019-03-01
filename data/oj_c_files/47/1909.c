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
 * ????nixu.cpp
 * ??????
 * ?????2012 12 22
 * ?????????
 */



int main(){
	int i,n,*p;
	cin >>n;
	int a[n];
	p=a;                         //??????????????
	for (i=0;i<n;i++)
		cin >>*(p+n-1-i);        //?????????
	for (i=0;i<n;i++){
		if (i!=n-1)
		cout <<*(p+i)<<' ';
		else cout <<*(p+i)<<endl;//????????
    }
}
