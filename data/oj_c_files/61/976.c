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
	int zu;
	cin >> zu;
	for(int i=1;i<=zu;i++){
		int j;cin>>j;
		switch (j){
		case 1: cout << 1 << endl;break;
		case 2: cout << 1 << endl;break;
		default:{int x1=1,x2=1;
			for(int k=3;k<=j;k++){
				x2=x1+x2;x1=x2-x1;
		}
			cout << x2 << endl;
		}
	}
	}
	return 0;
}
