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
	int nCases, n, t;
	int wasteTime;
	
	cin >> nCases;
	while (nCases--){
		cin >> n;
		wasteTime = 0;
		for (int i = 0; i < n; i++){
			cin >> t;
			t += i * 3;
			if (t + 3 <= 60)
				wasteTime += 3;
			else if (t < 60 && t + 3 > 60)
				wasteTime += (60 - t);
		}
		
		cout << 60 - wasteTime << endl;
	}
	return 0;
}