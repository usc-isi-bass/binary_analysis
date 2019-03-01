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
 * ????shuzu.cpp
 * ???00948343_??
 * ?????2012/10/8
 * ???????????
 */



int main(){
	int n;                     //???????
	cin >> n;
	int a[n], i, j;            //?????????
	for (i=0;i<n;i++){
		cin >> a[i];           //????
		for (j=0;j<i;j++){     //????????
			if (a[j]==a[i])
				break;
		}
		if (j==i){             //????????????????
			if (i!=0)
				cout << ' ';
			cout << a[i];
		}
	}
	return 0;
}

