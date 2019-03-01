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
    int i,n;
    char a[260];
	cin >> n;
	while(n > 0){
		scanf("%s",a);
		for(i=0;a[i]!=0;i++){
			switch(a[i]){
			case 'A': a[i] = 'T'; break;
			case 'T': a[i] = 'A'; break;
			case 'C': a[i] = 'G'; break;
			case 'G': a[i] = 'C'; break;
			}
		}
		cout << a <<endl;
		n--;
	}
	return 0;
}

