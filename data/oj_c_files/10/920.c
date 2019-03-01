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




int h[MAXN], k;

int bp(int i, int height, int sum){
	if(i == k) return sum;
	if(h[i]<=height){
		int a1 = bp(i+1, h[i], sum+1);
		int a2 = bp(i+1, height, sum);
		return (a1 > a2) ? a1 : a2;
	}
	return bp(i+1,height,sum);
}

int main(){
	
	cin>>k;
	for(int i = 0; i < k; i++) cin>>h[i];

	cout << bp(0, INF, 0) << endl;

	return 0;
}
