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




int main(){
	int a[100000], n, front=0, back=0, dltnumber, num=0;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	cin >> dltnumber;
	while(back <n){
		while(a[back]!=dltnumber){
			a[front++] = a[back++];
		}
		while(a[back] == dltnumber && back <n){
			++back;
			++num;
		}
	}
	for(int i=0; i<(n-num); ++i){
		cout << a[i];
		if(i!=n-num-1)
			cout << " ";
	}
	return 0;
}
