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
 * ????22.cpp
 * ??????
 * ????: 2012-9-30
 * ??:??????????
 */


int main(){
	int n=0,i=0,j=0,m=0;              //i,j?????
	cin>>n;
	for (i=0;i<n;i++){            //???????
		cin>>m;
		int a[m];
		a[0]=1;
		a[1]=1;
		for (j=2;j<=m;j++){
			a[j]=a[j-1]+a[j-2];   //????????m?
		}
        cout<<a[m-1]<<endl;
	}
	return 0;
}