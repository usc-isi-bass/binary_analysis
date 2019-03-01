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


int n,k;
int p(int n,int k){
	if(!k)return 1;
	return n*p(n,k-1);
}
int main(){
	cin>>n>>k;
	cout<<p(n,n)-k*(n-1);
	return 0;
}