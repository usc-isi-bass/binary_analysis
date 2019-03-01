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


int main(void){
	int n, i;
	char word[41];
	scanf("%d", &n);
	int curLen;
	curLen = 0;
	int afterLen;
	int wordLen;
	for (i=0; i<n; i++){
		scanf("%s", word);
		wordLen = strlen(word);
		if (curLen == 0){
			afterLen = curLen+wordLen;
			if (afterLen<=80){
				printf("%s", word);
				curLen = afterLen;
			}
			else{
				printf("\n%s", word);
				curLen = wordLen;
			}
		}
		else {
			afterLen = 1+curLen+wordLen;
			if (afterLen<=80){
				printf(" %s", word);
				curLen = afterLen;
			}
			else{
				printf("\n%s", word);
				curLen = wordLen;
			}
		}
	}
	printf("\n");
	return 0;
}
