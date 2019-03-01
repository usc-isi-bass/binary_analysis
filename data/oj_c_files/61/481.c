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



int b[21];

void cal(){
    b[0] = 1;
	b[1] = 1;
	for(int i = 2 ;i <= 20;i++){
		b[i] = b[i - 1] + b[i - 2];
	}
}

int main(){
	int a,n;
	cal();
	cin>>n;
	while(n--){
		cin>>a;
		cout<<b[a -1]<<endl;
	}
	return 0;
}