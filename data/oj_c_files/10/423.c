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


int H[100];
int N;

int memo[40][40];

int dp(int i, int k) { // from i, max H[k]
	int rslt;
	if(i == N) return 0;
	if(memo[i][k] != -1) return memo[i][k];
	if(k != 30 && H[i] > H[k]) rslt = dp(i + 1, k);
	else {
		int a = dp(i + 1, i) + 1;
		int b = dp(i + 1, k);
		if(a > b) rslt = a; else rslt = b;
	}
	return memo[i][k] = rslt;
}

int main() {
	scanf("%d", &N);
	for(int i = 0; i < 40; i++) for(int j = 0; j < 40; j++)
		memo[i][j] = -1;
	for(int i = 0; i < N; i++) {
		scanf("%d", &H[i]);
	}
	printf("%d\n", dp(0, 30));
}
