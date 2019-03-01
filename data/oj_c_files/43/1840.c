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

int main(){
	int e;
	cin>>e;
	int a = 3,b;
	while(a <= e/2){
	
	int t = 3;
	while(t < a){
		int m = a%t;
		if(m == 0)break;
		t+=2;
	}
	int q = 3;
	while(q < e - a){
		int n = (e-a)%q;
		if(n == 0)break;
		q+=2;
	}
	if(t == a && q == e-a)
		cout<<a<<" "<<e-a<<endl;
	a += 2;
	}
	return 0;
}
