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


int main() {
	int n;
	cin >> n;
	int total, eff; /* total is to store the total number of the cocktail 
					and eff is to store the effective number of the cocktail */
	cin >> total >> eff;
	double e1; /* to calculate the efficency of the cocltail */
	e1 = ((double)(eff)) / ((double)(total));
	int total2, eff2; /* to store the total number andthe effective number of the other methods */ 
	double e2;
	for(int i = 0; i < n - 1; i++) {
		cin >> total2 >> eff2;
		e2 = ((double)(eff2) / (double)(total2));
		if(e2 - e1 > 0.05) cout << "better" << endl;
		else {
			if(e1 - e2 > 0.05) cout << "worse" << endl;
			else cout << "same" << endl;
		}
	}
	return 0;
}