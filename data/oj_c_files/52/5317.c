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
 * ????xunhuan.cpp
 * ??????
 * ?????2012 12 22
 * ?????????
 */



int main(){
	int m,n,i,j,t;
	cin >>n>>m;
	int a[n];
	for (i=0;i<n;i++)
		cin >>*(a+i);               //??
	for (i=1;i<=m;i++)
		for (j=1;j<=n-m;j++){
			t=*(a+n-m+i-j);
			*(a+n-m+i-j)=*(a+n-m+i-j-1);
			*(a+n-m+i-j-1)=t;
		}                            //????
	for (i=0;i<n;i++){
		if (i!=n-1)
		cout <<*(a+i)<<" ";
		else cout <<*(a+i);          //??
	}
	return 0;
}
