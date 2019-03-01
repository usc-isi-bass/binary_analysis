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


void fuck(int x,int y){
	int temp;
	if(x==y)
		cout<<x;
	else{
		if(y<x) {temp=x;x=y;y=temp;}
	fuck(x,y/2);
	}
}

int main(){
	int x,y;
	cin>>x>>y;
	fuck(x,y);
	return 0;
}