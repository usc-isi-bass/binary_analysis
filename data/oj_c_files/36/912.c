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
	char s1[100],s2[100];
	cin>> s1>> s2;
	int l1 = strlen(s1), l2 = strlen(s2), t=0;
	if(l1!= l2) cout<< "NO" <<endl;
	else {
		for (int i=0; i<l1; i++){
			for(int j = 0; j<l2; j++){
				if(s1[i] == s2[j]){
					s2[j] = ' ';
					t++;
					break;
				}
			}
		}
		if(t == l1) cout<< "YES" << endl;
		else cout<< "NO" << endl;
	}
	return 0;
}