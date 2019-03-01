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

int f(int x,int y){//????f(x)???????
	while(x!=y){
		if(x>y)x=x/2;
		else y=y/2;
	}
	return x;
}
int main(){
	int a,b;
	cin>>a>>b;//????????
	cout<<f(a,b)<<endl;//???????
	return 0;
}