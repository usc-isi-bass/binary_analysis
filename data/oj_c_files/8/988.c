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


int a[100], la, b[100], lb, c[200], lc;

void R(){
	int i;
	cin >> la >> lb;
	for(i = 1;i <= la;i++)
		cin >> a[i];
	for(i = 1;i <= lb;i++)
		cin >> b[i];
	return;
}

void S(int *x, int lx){
	int i, j;
	for(i = 1;i < lx;i++){
		for(j = 1;j <= lx - i;j++){
			if(x[j] > x[j + 1]){
				int t = x[j];
				x[j] = x[j + 1];
				x[j + 1] = t;
			}
		}
	}
	return;
}

void M(){
	int i;
	for(i = 1;i <= la;i++)
		c[i] = a[i];
	for(i = la + 1;i <= la + lb;i++)
		c[i] = b[i - la];
	return;
}

void D(){
	int i;
	for(i = 1;i <= la + lb;i++){
		if(i > 1)
			cout << " ";
		cout << c[i];
	}
	cout << endl;
	return;
}

int main(){
	R();S(a, la);S(b, lb);M();D();
	return 0;
}
