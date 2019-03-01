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
	int x,y;
	int n;cin >> n;
	int m = 0,count = 0;
	while(n--){
		cin >> x >> y;
		if(x >= 90 && x <= 140 && y >= 60 && y <= 90){
			count ++;
			m = max(m,count);
		} else {
			count = 0;
		}
	}
	cout << m << endl;
	return 0;
}