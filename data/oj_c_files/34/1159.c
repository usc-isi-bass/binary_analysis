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

int guess(int x){
	if(x==1){
		cout<<"End";
		return 0;}
	else if(x%2==0){
		int b=x/2;
		cout<<x<<"/2="<<b<<endl;;
		return guess(b);
	}
	else {
		int b=x*3+1;
		cout<<x<<"*3+1="<<b<<endl;
		return guess(b);
	}
}
int main(){
	int n;
	cin>>n;
	if(!guess(n))
	return 0;
}