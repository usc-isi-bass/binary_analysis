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
 *????1000010416_25.cpp
 *???????????
 *Created on: 2010-11-5
 *Author: ???
 */

int main(){//???
	int n,m;//????
	cin>>n;//??
	int a[200000];//????
	for(int i=0;i<=n-1;i++){//??
		cin>>a[i];
	}
	cin>>m;//??
	int i;
	for(i=0;i<=n-1;i++){//?????
			if(a[i]!=m){
				cout<<a[i];//??
				break;
			}
	}
	for(i++;i<=n-1;i++){//??  ??
		if(a[i]!=m){
			cout<<" ";
			cout<<a[i];//??
		}
	}
   return 0;
}