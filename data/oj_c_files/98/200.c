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
	char word[41];
	int n, cnt, len;

	scanf("%d", &n);
	cnt = 0;
	while (n--){
		scanf("%s", word);
		len = strlen(word);
		if (cnt == 0){
			printf("%s", word);
			cnt = len;
		}else if (cnt + len < 80){
			printf(" %s", word);
			cnt += len + 1;
		}else{
			printf("\n%s", word);
			cnt = len;
		}
	}

	return 0;
}