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

	char ch[1000];
	//scanf("%s", ch);
	gets(ch);
	int len = strlen(ch);

	int i;
	for(i = 0; i < len; i++) {
		if(ch[i] != ' ') {
			printf("%c" , ch[i]);
		} else {
			if(ch[i-1] == ' ') {

			} else {
				printf(" ");
			}
		}
	}

	printf("\n");


	return 0;
}