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



	char sentence[100][100],a[100],b[100];
	
int main() {
	int cnt=1;
	while (scanf("%s",sentence[cnt])!=EOF) cnt++;
	cnt--;
	memcpy(a,sentence[cnt-1],sizeof(sentence[cnt-1]));
	memcpy(b,sentence[cnt],sizeof(sentence[cnt]));
	for (int i=1;i<cnt-1;i++) {
		if (i!=1) printf(" ");
		if (strcmp(sentence[i],a)==0) printf("%s",b);
			else printf("%s",sentence[i]);
	}
	printf("\n");
	return 0;
} 