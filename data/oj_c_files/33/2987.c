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
	int n;
	char a[1000];
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%s",a);
		int len = strlen(a);
		for (int j = 0;j < len; j++){
			char ans;
			switch (a[j]) {
				case 'A': ans = 'T';break;
				case 'T': ans = 'A';break;
				case 'G': ans = 'C';break;
				case 'C': ans = 'G';break;
			}
			printf("%c", ans );
		}
		printf("\n");
	}
	

}