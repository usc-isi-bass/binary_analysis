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
 * ?????????.cpp
 * ??????
 * ?????2012.11.27
 * ??????????????????????????
 */
int x,y;
int print(){
	cout<<" ";
	return 0;
}
void order(int n)
{
	int i,j,temp=0;
	int a[10];
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1-i;j++){
			if (a[j+1]<a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
}
int main()
{
	cin>>x>>y;
	order(x);
	print();
	order(y);
	return 0;
}
