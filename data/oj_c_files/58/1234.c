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

int main()
{
	int n;
	int i, j;
	int yesOrNo;
	char * p;
	
	scanf("%d",&n);
	getchar();
	for (i = 0; i < n; i++) {
		char a[81] = {'\0'};
		gets(a);
		p = a;
		yesOrNo = 0;
		if (*p == '_' || (*p >='A' && *p <= 'Z') || (*p>='a' && *p <= 'z')) {
			for (j = 0; j < strlen(a); j++) {
				if ((*p >='A' && *p <= 'Z') || (*p>='a' && *p <= 'z') || (*p >= '0' && *p <= '9') || *p == '_') {
					p++;
				}
				else {
					printf("0\n");
					yesOrNo = 1;
					break;
				}
			}
			if (yesOrNo == 0) {
				printf("1\n");
			}
		}
		else {
			printf("0\n");
		}
	}
	return 0;
}