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

//????

int f(int x,int min){
	if(x<min) return 0;
	int r=1;
	for(int i=min;i<x/2;i++){
		if(x%i==0){
			r+=f(x/i,i);
		}
	}
	return r;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout<<f(x,2)<<endl;
	}
}
