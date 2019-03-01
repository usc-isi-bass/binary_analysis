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


void jiaogu(int N){
	if (N==1){
		cout << "End" << endl;
		return;
	}
	if (N%2!=0){
		cout <<N<<"*"<<3<<"+"<<1<<"="<<3*N+1<<endl;
		return jiaogu(3*N+1);
	}
	if (N%2==0){
		cout <<N<<"/"<<2<<"="<<N/2<<endl;
		return jiaogu(N/2);
	}
}
int main() {
	int N = 0;
	cin >> N;
	jiaogu(N);
	return 0;
}
