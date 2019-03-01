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

//============================================================================
// Name        : POJ3.cpp
// Author      : Liang ShiYu
// Version     : 1.0
// Copyright   : copyright reserved
// Description : Homework
// Date        : 2010-11-20
//============================================================================


int main() {
	int n,k,i,i2,j;                 //????
	cin>>n>>k;                      //????
	for(i2=1;;i2++){                //????
		i=i2;
		for(j=0;j<n;j++){           //????
			if(i%(n-1)!=0) break;
			i=i*n/(n-1)+k;
		}
		if(j==n) {
			cout<<i;                //??
			return 0;
		}
		else continue;
	}
	return 0;
}
