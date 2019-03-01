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
	char s[200],s1[200];
	int i, j;
	int len;
	while(gets(s)!=NULL) {
		len = strlen(s);
		strcpy(s1, s);
		for(i=0; i<len; i++) {
			if(s[i] == ')') {
				for(j=i-1; j>=0; j--) {
					if(s[j] == '(') {
						break;
					}
				}
				if(j >= 0) {
					s[i] = ' ';
					s[j] = ' ';
				} else {
					s[i] = '?';
				}

			} else if(s[i] != '(') {
				s[i] = ' ';
			}
		}
		for(i=0; i<len; i++) {
			if(s[i] == '(') s[i] = '$';
		}
		puts(s1);
		puts(s);
	}
	return 0;
}
