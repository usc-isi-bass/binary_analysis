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

void run(int *p,int n){
	if(n!=1) cout<<*p<<" ";
	else{
		cout<<*p;
		return;
		}
	run(p-1,n-1);
	return;
	}
int main(){
	int a[110],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	//?????????? 
	run(a+n-1,n);
	return 0;
	}
