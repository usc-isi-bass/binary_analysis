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

int c(int , int);
int main(void){
	int a,b;
	cin>>a>>b;
	cout<<c(a,b)<<endl;
	return 0;
}
int c(int x, int y){
	if(x%y==0) return y;
	if(x>y) return c(x/2,y);
	if(x<y) return c(x,y/2);
}