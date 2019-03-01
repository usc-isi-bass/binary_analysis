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
	char a[1000], b[1000];
	int c[130] = { 0 },t=0;
	cin >> a >> b;
	if (strlen(a) != strlen(b))//?????
		cout << "NO";
	else {//?????
		for (int i = 0; i < strlen(a); i++) {//????????
			c[b[i]]--;
			c[a[i]]++;
		}
        for (int i=0;i<130;i++){
        	if (c[i]!=0){
        		t=1;
        	   cout<<"NO";
        	   break;
        	}
        }
        if (t==0)
        	cout<<"YES";
	}

	return 0;
}