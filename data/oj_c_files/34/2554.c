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

int f(int n);
int main( )
{
	int n,i;
	cin >>n;
	for(i=0;i<100;i++){
		if(n==1){
			cout <<"End" <<endl;
			break;
		}
		else{
			if(n%2==0){
				cout <<n <<"/2=" <<f(n) <<endl;}
			else{
				cout <<n <<"*3+1=" <<f(n) <<endl;}
			n=f(n);
		}
	}
	return 0;
}

int f(int n)
{
	if(n%2==0) return n/2;
	else return n*3+1;
}