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
 * ????????????.cpp
 * ?????
 * ????: 2012-10-29
 * ???????????
 */
int main(){											//?????
	int a[100000];									//????a[100000]
	int n=1,k=1,m=1,i=0,j=0,t=0;					//???????
	cin>>n;											//??n
	for(i=0;i<n;i++){							//?????????
		cin>>m;
		a[i]=m;
	}
	cin>>k;											//??k
	for(j=0;j<n;j++){							//???????
		if(a[j]==k){									//????????k
			for(t=j;t<n;t++){
				a[t]=a[t+1];								//??????
			}
			j--;
			n--;										//???j?n??
		}
		else continue;									//????
		}
	cout<<a[0];											//?????????
	for(i=1;i<n;i++){
		cout<<" "<<a[i];								//??????
	}
	return 0;
}													//?????