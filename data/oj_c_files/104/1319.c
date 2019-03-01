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

int tree(int x,int y){
	if(x<y)return tree(x,(y-y%2)/2);
	if(x>y)return tree((x-x%2)/2,y);
	if(x==y)return x;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout << tree(a,b) << endl;
	return 0;
}
